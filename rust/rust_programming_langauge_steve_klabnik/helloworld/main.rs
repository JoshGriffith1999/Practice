//Use rustc to compile single files into an executable binary

//We can use rusts built in build system and packer manager called cargo

//Cargo new <packageName> -command that we use to create a new project with cargo
//  Inside the newly created directory built with cargo we get a src folder - where the code will live, a .gitignore, and Cargo.toml - configuration file for the package 

//Cargo build - how we compile all of our rust code - we get a directory called target/debug thats where our executable lives,
//  a CARGO.lock file in the root - list of our dependencies

//Cargo run - command we use to execute our newly executed binary

//Cargo check - command that we can use to check our source code for errors without building an executable

fn main(){
    println!("Hello World from Lets Get Rusty youtube channel tutorial ")
}