fn main(){

    let x: u32 = 4;
    let address = 0x12345usize;
    let r1 = address as *const i32;

    //In unsafe blocks, anything is possible
    unsafe{
        println!("This is from the unsafe mode block\n");
        println!("*r1 is {}\n", *r1);

    }
    println!("Hello World {}", x);

    return;
}