//This is a constant
const VAL: u32 = 12;

/*
Two  Groups of variables scalar and compound: 

Scalar: Hold a single value
    Interger: whole numbers, signed(i) and unsigned(u) declare number of BITS after signed or unsigned declare
        i8, i16, i32, i64, i128
        u8, u16, u32, u64, u128
    Float: decimal based numbers, always signed
        f32: single percision
        f64: double percision
    Character: can hold letters, characters, numbers, emojos,etc
        Uses unicode instead of ASCII character sets
        4 bytes in 
        '' character literal
        "" string literal
    Boolean: true or false - thats it

Compound: Can hold multiple values
    Tuple:
        let tup: (dt1, dt2, ....) = (dt1_val, dt2_val, ......)
        Tup destruxtion: let (x, y, z, .....) = tup
        Access individual elements: a = tup.0; b = tup.1, ....
        fixed length
        can't change after decleration
        can group together values of different data types
        can't loop through a tuple
    Array:
        let array: [data_type, max_elements] = [elements]; or let array: = [elements]
        access and element: let x: i32 = array[index];
        fixed length
        all elements must be of the same data type
        allocated on the stack


 */

/*
    Statements:
        Don't return a value
        End in a semi-colon
        Instructions that perform an action
    Expression:
        Return a value
        Don't end in a semi-colon
        evaluate to a resultant value
 */

/*
    Functions:
        Doesn't really matter where a function is declared - as long as its with in scope of the caller
        Returns value of the last expression - only if a return data type is declared in the signature
        All parameters must have their data type declared
 */

/*
    Three kinds if loops: loop, for, and while

    loop:
        infinte loop
        executes over and over until it's told to stop
        can return a value by placing the expression after a break statement
    for:
    while: 
 */
fn main() {

    let x = 5;
    let mut result = 2;
    let mut index = 0;
    //println!("x is equal to {x}\n");

    let x = x + 1;
    let array = [1,2,3,4,5];
    //let tupple = ("hello", 1, 3.25);

    {
        /*
            In this section we are looking at the concept of shadowing, or declaring a variable with the same name as an already existing variables
            The compiler sees the seconds decleration of the variable as the one it's going to use, meaning the first instance is shadowed by the second
                instance
            One advantage of shadowing is that the newly created instance of a variable we can change the data type of that variable
            Can use return keyword to return a value
         */
        let x = x *x;
        println!("Value of X in the inner scope {x}\n");
    }
    println!("x in the outter scope is equal to {x}\n");

    let z: i32 = another_function_2(5, 7);
    var_output(z, 'z');
    
    let mut a: i32 = another_function_3(2, 3);
    var_output(a, 'a');

    a = another_function_3(3, 2);
    var_output(a, 'a');

    a = another_function_3(5, 5);
    var_output(a, 'a');

    another_function();

    let r = loop{
        
        result = result + result;

        println!("Look, I'm in the loop");

        if index == 10{
            break result + 1
        }
        index = index + 1;
    };
    var_output(r, 'r');

    index = 0;

    while index < 5{

        println!("Index {} of the array is {}", index, array[index]);
        index += 1;
    }

    for element in array{
        println!("Element is {element}");
    }
    
    for index in 1..10{

        println!("Value of index is {}", index);
    }
}

fn var_output(x: i32, letter: char){
    println!("Value of {letter} is {x}");
}

fn another_function(){

    println!("Look, I'm inside another function");
    println!("Constant VAL is equal to {VAL}\n");
}

fn another_function_2(x: i32, y: i32) -> i32{
    x+y
}

fn another_function_3(x: i32, y: i32) -> i32{

    if x < y{
        y
    }
    else if x > y {
        x
    }
    else{
        x + y
    }
}