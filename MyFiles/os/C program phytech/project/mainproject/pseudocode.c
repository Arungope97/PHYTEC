function randomPasswordGeneration(N)
    i = 0
    randomizer = 0
    
    srand(current time)
    
    numbers[] = "0123456789"
    letter[] = "abcdefghijklmnoqprstuvwyzx"
    LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX"
    symbols[] = "!@#$^&*?"
    password[N]
    
    randomizer = random number between 0 and 3
    
    loop i from 0 to N-1
        if randomizer is 1
            password[i] = random character from numbers array
            randomizer = random number between 0 and 3
            print password[i]
        else if randomizer is 2
            password[i] = random character from symbols array
            randomizer = random number between 0 and 3
            print password[i]
        else if randomizer is 3
            password[i] = random character from LETTER array
            randomizer = random number between 0 and 3
            print password[i]
        else
            password[i] = random character from letter array
            randomizer = random number between 0 and 3
            print password[i]
    
    end loop
end function

main()
    N = input length of password
    randomPasswordGeneration(N)
    return 0
end main