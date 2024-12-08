def encrypt(text, shift):
    result = ""
    for char in text:
        if char.isalpha():  # Check if the character is a letter
            shift_base = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - shift_base + shift) % 26 + shift_base)
        else:
            result += char  # Non-alphabet characters are not encrypted
    return result

# Test the function
text = input("Enter the text to encrypt: ")
shift = int(input("Enter the shift value: "))
encrypted_text = encrypt(text, shift)
print(f"Encrypted text: {encrypted_text}")
