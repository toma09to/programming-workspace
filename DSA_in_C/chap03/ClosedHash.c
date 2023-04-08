// オープンアドレス法によるハッシュ（ソース部）

#include <stdio.h>
#include <stdlib.h>
#include "Member.h"
#include "ClosedHash.h"

/*--- ハッシュ関数（keyのハッシュ値を返す） ---*/
static int hash(int key, int size)
{
    return key % size;
}

/*--- 再ハッシュ関数 ---*/
static int rehash(int key, int size)
{
    return (key + 1) % size;
}

/*--- ノードの各メンバに値を設定 ---*/
static void SetBucket(Bucket *n, const Member *x, Status stat)
{
    n->data = *x;       // データ
    n->stat = stat;     // 要素の状態
}

/*--- ハッシュ表を初期化 ---*/
int Initialize(ClosedHash *h, int size)
{
    if ((h->table = calloc(size, sizeof(Bucket))) == NULL) {
        h->size = 0;
        return 0;
    }

    h->size = size;
    for (int i = 0; i < size; i++)
        h->table[i].stat = Empty;
    return 1;
}

/*--- 探索 ---*/
Bucket *Search(const ClosedHash *h, const Member *x)
{
    int key = hash(x->no, h->size);     // 探索するデータのハッシュ値
    Bucket *p = &h->table[key];         // 着目ノード

    for (int i = 0; p->stat != Empty && i < h->size; i++) {
        if (p->stat == Occupied && p->data.no == x->no)
            return p;
        key = rehash(key, h->size);     // 再ハッシュ
        p = &h->table[key];
    }
    return NULL;
}

/*--- データの追加 ---*/
int Add(ClosedHash *h, const Member *x)
{
    int key = hash(x->no, h->size);     // 追加するデータのハッシュ値
    Bucket *p = &h->table[key];         // 着目ノード

    if (Search(h, x))                   // このキーは登録ずみ
        return 1;

    for (int i = 0; i < h->size; i++) {
        if (p->stat == Empty || p->stat == Deleted) {
            SetBucket(p, x, Occupied);
            return 0;
        }
        key = rehash(key, h->size);     // 再ハッシュ
        p = &h->table[key];
    }
    return 2;                           // ハッシュ表が満杯
}

/*--- データの削除 ---*/
int Remove(ClosedHash *h, const Member *x)
{
    Bucket *p = Search(h, x);

    if (p == NULL)
        return 1;                       // そのキー値は存在しない

    p->stat = Deleted;
    return 0;
}

/*--- ハッシュ表をダンプ ---*/
void Dump(const ClosedHash *h)
{
    for (int i = 0; i < h->size; i++) {
        printf("%02d : ", i);
        switch (h->table[i].stat) {
            case Occupied : printf("%d (%s)\n",
                                    h->table[i].data.no, h->table[i].data.name);
                            break;
            case Empty :    printf("-- 未登録 --\n");  break;
            case Deleted :  printf("-- 削除ずみ --\n");  break;
        }
    }
}

/*--- 全データの削除 ---*/
void Clear(ClosedHash *h)
{
    for (int i = 0; i < h->size; i++)   // 全てのバケットを
        h->table[i].stat = Empty;       // 空にする
}

/*--- ハッシュ表を後始末 ---*/
void Terminate(ClosedHash *h)
{
    Clear(h);               // 全データを削除
    free(h->table);         // ハッシュ表用配列の記憶域を解放
    h->size = 0;            // ハッシュ表の容量をクリア
}
