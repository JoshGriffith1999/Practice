def get_gender(sex="unknown"):
    if sex == "m":
        sex = "Male"
    elif sex == "f":
        sex = "Female"
    print(sex)


get_gender()
get_gender("m")
get_gender("f")