def health_calculator(age, apples, cigs_smoked):
    answer = (100 - age) + (apples * 3.5) - (cigs_smoked *2)
    print(answer)

daves_data = [27, 20, 0]
buckys_data = [21, 15, 0]
susans_data = [65, 5, 13]
#slow way
health_calculator(daves_data[0], daves_data[1], daves_data[2])
health_calculator(buckys_data[0], buckys_data[1], buckys_data[2])
health_calculator(susans_data[0], susans_data[1], susans_data[2])
#faster way, astrik unpacks it by taking each element in the list and passes each one in order to the parameter in the function
#need to play with this more to understand it
health_calculator(*daves_data)
health_calculator(*buckys_data)
health_calculator(*susans_data)