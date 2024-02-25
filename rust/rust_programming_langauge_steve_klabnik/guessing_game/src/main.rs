use std::io;
use rand::Rng;
use::std::cmp::Ordering;

fn main() {
    
    println!("Guess the number");

    //This is how we get a random number from the thread running this program
    let secert_number = rand::thread_rng().gen_range(1..=100);
    
    //Infinite loop - only stops when we guess the correct mi,er
    loop{

        println!("Please input your guess. ");

        //Assign a guess variable
        let mut guess = String::new();
        
        //Get user input with the io::stdin()
        //read_line() gets input from the user - comes in as a string by default
        //expect() is for error handeling - not needed, but compiler will give us a warning
        io::stdin()
            .read_line(&mut guess)
            .expect("Failed to read line!");

        //Rust allows us to use something called shadowing - ability to reuse variables

        //Since our input is a string and our random number is a u32, we need to do some conversion
        //trim() - remove all white spaces before and after the input
        //parse() - allows us to convert our input to an int
        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };
        
        println!("You guessed: {guess}.");
        
        //This is how we are able to do comparison statements
        match guess.cmp(&secert_number) {
            Ordering::Less => print!("Too Small"),
            Ordering::Greater => print!("To Big"),
            Ordering::Equal => {
                print!("You got it");
                break
            }
        }

        println!("");
    }

    
}
