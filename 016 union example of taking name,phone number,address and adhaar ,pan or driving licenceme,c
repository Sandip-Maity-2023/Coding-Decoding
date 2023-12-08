#include <stdio.h>
#include <string.h>

// Define a union named IdentificationDocument
union IdentificationDocument {
    struct {
        char name[50];
        char address[100];
        long long aadhaarNumber;
    } aadhaar;

    struct {
        char name[50];
        char panNumber[20];
    } pan;

    struct {
        char name[50];
        char licenseNumber[20];
    } drivingLicense;
};

// Enum to represent the type of identification document
enum DocumentType {
    Aadhaar,
    PAN,
    DrivingLicense
};

int main() {
    // Declare a variable of type IdentificationDocument
    union IdentificationDocument document;

    // Use the union to represent an Aadhaar card
    document.aadhaar.aadhaarNumber = 123456789012;
    strcpy(document.aadhaar.name, "John Doe");
    strcpy(document.aadhaar.address, "123 Main Street, Cityville");

    // Print Aadhaar details
    printf("Aadhaar Card Details:\n");
    printf("Name: %s\n", document.aadhaar.name);
    printf("Address: %s\n", document.aadhaar.address);
    printf("Aadhaar Number: %lld\n", document.aadhaar.aadhaarNumber);
    printf("\n");

    // Use the union to represent a PAN card
    strcpy(document.pan.name, "Jane Smith");
    strcpy(document.pan.panNumber, "ABCDE1234F");

    // Print PAN card details
    printf("PAN Card Details:\n");
    printf("Name: %s\n", document.pan.name);
    printf("PAN Number: %s\n", document.pan.panNumber);
    printf("\n");

    // Use the union to represent a Driving License
    strcpy(document.drivingLicense.name, "Bob Johnson");
    strcpy(document.drivingLicense.licenseNumber, "DL123456");

    // Print Driving License details
    printf("Driving License Details:\n");
    printf("Name: %s\n", document.drivingLicense.name);
    printf("License Number: %s\n", document.drivingLicense.licenseNumber);

    return 0;
}
