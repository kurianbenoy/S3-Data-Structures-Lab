from passlib.hash import sha256_crypt

password = raw_input()
hash = sha256_crypt.hash(password)
print(hash)

print("Enter new password \n")
login = raw_input()

print(sha256_crypt.verify(login,hash))
if (sha256_crypt.verify(login,hash) == True):
    print("Password is matching")
