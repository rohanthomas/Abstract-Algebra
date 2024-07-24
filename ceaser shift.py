def ceasershift(message,shift):
  message = message.upper()
  message = message.strip()
  alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  encrypt = ""
  for letter in message: # Looping over the input message
    if letter in alpha: #concatenate if it's a letter
      encrypt = encrypt + alpha[(shift + alpha.index(letter))%26] #Modular arithematic to wrap it up
    else:
      encrypt = encrypt + letter #useful to print whitespaces.
  return encrypt

ceasershift("HELLO I AM ROHAN",2)

#A Trivial way to break a ceaser cypher. 

for x in range(0,25):
  print(ceasershift("UCCRZIQYOBRVOJSTIB",x)) #run to find it out :)
