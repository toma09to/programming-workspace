use ws::listen;

fn main() {
    println!("Running the Server");

    listen("127.0.0.1:3012", |out| {
        move |msg| {
            let response: String = format!("{} - {}", msg, "Im server.".to_string());
            println!("{}", response);
            out.send(response)
        }
    })
    .unwrap()
}
