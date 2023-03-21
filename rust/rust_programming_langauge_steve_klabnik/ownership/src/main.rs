/*
    Memory is managed by ownership
    Ownership: Set of rules that the compiler checks at compile time
        If any of the rules are violated at compile time, the compiler throws an error and stops compiling
    
    Ownership Rules:
        Each value in Rust has a owner
        There can only be one owner at a time
        When the owner goes out of scope, the value will be dropped
    
    String:
        Different then String Literals (&str)
        Allocated on the heap instead of on the stack at run time
        Doesn't have a fixed size
        Mutable
        Contains 3 values that are allocated to the stack
            ptr to the heap memory allocated to hold he value of the string
            length: how much memory in bytes the contents of the string is currently using 
            capacity: total amount of memory in bytes the string has received from the allocator 
    
    Memory Allocation:
        We allocate memory on the stack when we are using any of the fixed size variables
        We allocate memory to the heap when we use a variables who's size is unknown at compile time
        Rust doesn't have a built in Garbage Collector to free memory thats no longer used
        Rust doesn't force the programmer to use allocate and free keywords to allocate and deallocate memeory in the Heap instead,
            Rust deallocates memeory in the heap when the requester variable goes out of scope
    
    Ownership:
        variabel.clone(): what this does is allow us to make a deep of a of a variable that is allocated in the heap
        when a variable on the stack is set equal to another variable on the stack, the values is copied over and both are valid to use
        when a variables allocated in the heap goes out of scope, Rust will call drop() to deallocate it
        passing variables to a function is pass by value - unless reference is used
        can return tuples
        when we pass a variable by value, the function than takes ownership of that value

    References and borrowing:
        memory address of the passed in variable to where the data is stored
        when a parameter makes reference to a variable, its called borrowing because the parameter won't own the data
        references do not have ownership
        slice: reference where we own a continous chuck of a collection instead of the whole collection

 */

fn main() {

    //At this point S is in scope, once do_stuff() is done executing, s is no longer in scope, do the memeory on the stack allocatted to it is freed
    let s = "Hello World";
    do_stuff(s);

    //Here we are going to demonstrate ownership with the string data type
    let mut new_str = String::from("Hello"); //Request memory in the heap at runtime
    new_str.push_str(", from UAS");
    do_stuff(&new_str); //After this point new_str is out of scope, so Rust calls drop() from the String data type to deallocate the memory

    //When we assign s2 to s1, s2 copies all the values of the string that are allocated on the STACK ONLY, thats it, nothing from the HEAP is copied
    let s1 =  String::from("Hello, double free error avoid");
    let s2 = s1; //This line is refered to as a move instead of a shallow copy

    // println!("{}", s1); //This line causes an issue, when we assign s2 to s1, Rust no longer conciders s1 as valid to avoid a double free error
    println!("{}", s2); //After this S2 is concidered out of scope, so Rust will call drop() to deallocate the memory

    //Reference and borrowing
    let mut str_ref = String::from("KF0LDN");

    let len_ref = calc_size(&mut str_ref);
    println!("{len_ref}");

    //slice of a string starting and end bytes can be dropped
    let word = String::from("Hello world");
    let hello= &word[..5];
    let world = &word[6..];
    println!("{} {}", hello, world);

}

fn do_stuff(s: &str){

    for c in s.chars(){

        println!("{}", c);
    }


}

fn calc_size(str_ref: &mut String)->usize{

    str_ref.push_str(", 2m and 6m");

    println!("Call sign is {}", str_ref);

    let length = str_ref.len();

    length
}