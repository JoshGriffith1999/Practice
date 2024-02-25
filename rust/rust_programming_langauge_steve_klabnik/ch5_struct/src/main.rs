struct Car{
    make: String,
    model: String,
    year: i32,
    mileage: i8,
}

struct Rectangle{
    width: u32,
    length: u32,
}


//This is where we define the methods for a struct
// &self refers to the members of the struct - need to be the first parameter to be an associated function
impl Rectangle{
    fn area(&self) -> u32{
        self.width * self.length
    }

    fn perimeter(&self) -> u32 {
        (2 * self.width) + (2 * self.length)
    }
}

fn main() {
    
    let pass_mak = String::from("Dodge");
    let pass_mod = String::from("Challenger");

    let mustang = Car{
        make: String::from("Chevy"),
        model: String::from("Mustang"),
        year: 69,
        mileage: 23
    };

    let mut challenger = build_car(pass_mak, pass_mod);

    println!("Make: {}", mustang.make);
    println!("Make: {}, Model: {}, Year: {}, Mileage: {}", challenger.make, challenger.model, challenger.year, challenger.mileage);

    challenger.year = 69;
    challenger.mileage = 11;
    
    println!("Make: {}, Model: {}, Year: {}, Mileage: {}", challenger.make, challenger.model, challenger.year, challenger.mileage);

    //let mut Challenger2 = challenger{ year: 22    };
    //println!("Make: {}, Model: {}, Year: {}, Mileage: {}", Challenger2.make, Challenger2.model, Challenger2.year, Challenger2.mileage);

    let rect1 = Rectangle{
        width: 2,
        length: 3,
    };

    println!("Area is {}, Perimeter is: {}", rect1.area(), rect1.perimeter());


}

fn build_car(make: String, model: String) -> Car{

   Car{
        make,
        model,
        mileage: 123,
        year: 23
    }

    
}
