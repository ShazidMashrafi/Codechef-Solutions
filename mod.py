with open('mod.txt', 'r') as file:
    lines = file.readlines()
new_lines=[]
for line in lines:
    old_line = line.strip().split(" | ")
    try:
        sol = old_line[3].split("/")
    except IndexError:
        print(old_line)
    if len(sol)==9:
        try:
            new_sol=sol[0]+"//"+sol[2]+"/"+sol[3]+"/"+sol[4]+"/tree/"+sol[6]+"/Codes/"+sol[7]+")"
        except IndexError:
            print(sol)
            print(old_line)
    else:
        try:
            new_sol=sol[0]+"//"+sol[2]+"/"+sol[3]+"/"+sol[4]+"/tree/"+sol[6]+"/Codes/"+sol[7]
        except IndexError:
            print(sol)
            print(old_line)
    
    new_line = old_line[0]+" | "+old_line[1]+" | "+old_line[2]+" | "+new_sol
    new_lines.append(new_line)
with open('mod2.txt', 'w') as file:   
    for i in new_lines:
        file.write(i + "\n")
