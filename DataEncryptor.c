#include <iostream>
#include <string>

class DataEncryptor {
public:
    DataEncryptor() {}

    std::string encrypt(const std::string& data) {
        std::string encryptedData;
        for (char c : data) {
            // Perform encryption operation
            char encryptedChar = c + encryptionKey;
            encryptedData += encryptedChar;
        }
        return encryptedData;
    }

    std::string decrypt(const std::string& encryptedData) {
        std::string decryptedData;
        for (char c : encryptedData) {
            // Perform decryption operation
            char decryptedChar = c - encryptionKey;
            decryptedData += decryptedChar;
        }
        return decryptedData;
    }

private:
    const int encryptionKey = 10;
};

int main() {
    DataEncryptor encryptor;

    std::string originalData = "Hello, world!";
    std::string encryptedData = encryptor.encrypt(originalData);
    std::cout << "Encrypted data: " << encryptedData << std::endl;

    std::string decryptedData = encryptor.decrypt(encryptedData);
    std::cout << "Decrypted data: " << decryptedData << std::endl;

    return 0;
}
