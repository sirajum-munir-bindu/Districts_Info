#include<stdio.h>
int a;

void Barishal_District();
void Chattogram_District();
void Dhaka_District();
void Khulna_District();
void Mymensingh_District();
void Rajshahi_District();
void Rangpur_District();
void Sylhet_District();


int main()
{
    while(1){
        printf("Find your desier Division: ");
        printf("\n1. Barishal\n");
        printf("2. Chattogram\n");
        printf("3. Dhaka\n");
        printf("4. Khulna\n");
        printf("5. Mymensingh\n");
        printf("6. Rajshahi\n");
        printf("7. Rangpur\n");
        printf("8. Sylhet\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &a);
        switch(a){
            case 1:
                printf("Find your desier District: \n");
                Barishal_District();
                break;
            case 2:{
                printf("Find your desier District: \n");
                Chattogram_District();
                break;
            }
            case 3:{
                printf("Find your desier District: \n");
                Dhaka_District();
                break;
            }
            case 4:{
                printf("Find your desier District: \n");
                Khulna_District();
                break;
            }
            case 5:{
                printf("Find your desier District: \n");
                Mymensingh_District();
                break;
            }
            case 6:{
                printf("Find your desier District: \n");
                Rajshahi_District();
                break;
            }
            case 7:{
                printf("Find your desier District: \n");
                Rangpur_District();
                break;
            }
            case 8:{
                printf("Find your desier District: \n");
                Sylhet_District();
                break;
            }
            case 9:{
                return 0;
            }
        }
    }
    
}

void Barishal_District(){
    printf("1. Barishal\n");
    printf("2. Barguna\n");
    printf("3. Bhola\n");
    printf("4. Jhalokathi\n");
    printf("5. Patuakhali\n");
    printf("6. Pirojpur\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        {
            printf("The distance between DSC to Barishal is 178.5 Km.\n");
            printf("The time required to reach Barishal is 4 hours 30 minutes in 40 km/h speed.\n");
            break;
        }
        case 2:
        {
            printf("The distance between DSC to Barguna is 336.5 Km.\n");
            printf("The time required to reach Barguna is 8 hours 24 minutes in 40 km/h speed.\n");
            break;
        }
        case 3:
        {
            printf("The distance between DSC to Bhola is 214.5 Km.\n");
            printf("The time required to reach Bhola is 5 hours 21 minutes in 40 km/h speed.\n");
            break;
        }
        case 4:
        {
            printf("The distance between DSC to Jhalokathi is 198.5 Km.\n");
            printf("The time required to reach Jhalokathi is 4 hours 57 minutes in 40 km/h speed.\n");
            break;
        }
        case 5:
        {
            printf("The distance between DSC to Patuakhali is 341.5 Km.\n");
            printf("The time required to reach Patuakhali is 8 hours 32 minutes in 40 km/h speed.\n");
            break;
        }
        case 6:
        {
            printf("The distance between DSC to Pirojpur is 276.5 Km.\n");
            printf("The time required to reach Pirojpur is 6 hours 54 minutes in 40 km/h speed.\n");
            break;
        }
        case 7:{
            return;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
}

void Chattogram_District(){
    printf("1. Bandarban\n");
    printf("2. Brahmanbaria\n");
    printf("3. Chandpur\n");
    printf("4. Chattogram\n");
    printf("5. Cox's Bazar\n");
    printf("6. Cumilla\n");
    printf("7. Feni\n");
    printf("8. Khagrachari\n");
    printf("9. Lakshmipur\n");
    printf("10. Noakhali\n");
    printf("11. Rangamati\n");
    printf("12. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        {
            printf("The distance between DSC to Bandarban is 414.5 Km.\n");
            printf("The time required to reach Bandarban is 10 hours 21 minutes in 40 km/h speed.\n");
            break;
        }
        case 2:
        {
            printf("The distance between DSC to Brahmanbaria is 234.5 Km.\n");
            printf("The time required to reach Brahmanbaria is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 3:
        {
            printf("The distance between DSC to Chandpur is 234.5 Km.\n");
            printf("The time required to reach Chandpur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 4:
        {
            printf("The distance between DSC to Chattogram is 243.5 Km.\n");
            printf("The time required to reach Chattogram is 6 hours 5 minutes in 40 km/h speed.\n");
            break;
        }
        case 5:
        {
            printf("The distance between DSC to Cox's Bazar is 414.5 Km.\n");
            printf("The time required to reach Cox's Bazar is 10 hours 21 minutes in 40 km/h speed.\n");
            break;
        }
        case 6:
        {
            printf("The distance between DSC to Cumilla is 234.5 Km.\n");
            printf("The time required to reach Cumilla is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 7:
        {
            printf("The distance between DSC to Feni is 234.5 Km.\n");
            printf("The time required to reach Feni is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 8:
        {
            printf("The distance between DSC to Khagrachari is 414.5 Km.\n");
            printf("The time required to reach Khagrachari is 10 hours 21 minutes in 40 km/h speed.\n");
            break;
        }
        case 9:
        {
            printf("The distance between DSC to Lakshmipur is 234.5 Km.\n");
            printf("The time required to reach Lakshmipur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 10:
        {
            printf("The distance between DSC to Noakhali is 234.5 Km.\n");
            printf("The time required to reach Noakhali is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 11:
        {
            printf("The distance between DSC to Rangamati is 414.5 Km.\n");
            printf("The time required to reach Rangamati is 10 hours 21 minutes in 40 km/h speed.\n");
            break;
        }
        case 12:{
            return;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
}

void Dhaka_District(){
    printf("1. Dhaka\n");
    printf("2. Faridpur\n");
    printf("3. Gazipur\n");
    printf("4. Gopalganj\n");
    printf("5. Kishoreganj\n");
    printf("6. Madaripur\n");
    printf("7. Manikganj\n");
    printf("8. Munshiganj\n");
    printf("9. Narayanganj\n");
    printf("10. Narsingdi\n");
    printf("11. Rajbari\n");
    printf("12. Shariatpur\n");
    printf("13. Tangail\n");
    printf("14. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        {
            printf("The distance between DSC to Dhaka is 0 Km.\n");
            printf("The time required to reach Dhaka is 0 hours 0 minutes in 40 km/h speed.\n");
            break;
        }
        case 2:
        {
            printf("The distance between DSC to Faridpur is 234.5 Km.\n");
            printf("The time required to reach Faridpur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 3:
        {
            printf("The distance between DSC to Gazipur is 234.5 Km.\n");
            printf("The time required to reach Gazipur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 4:
        {
            printf("The distance between DSC to Gopalganj is 234.5 Km.\n");
            printf("The time required to reach Gopalganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 5:
        {
            printf("The distance between DSC to Kishoreganj is 234.5 Km.\n");
            printf("The time required to reach Kishoreganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 6:
        {
            printf("The distance between DSC to Madaripur is 234.5 Km.\n");
            printf("The time required to reach Madaripur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 7:
        {
            printf("The distance between DSC to Manikganj is 234.5 Km.\n");
            printf("The time required to reach Manikganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 8:
        {
            printf("The distance between DSC to Munshiganj is 234.5 Km.\n");
            printf("The time required to reach Munshiganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 9:
        {
            printf("The distance between DSC to Narayanganj is 234.5 Km.\n");
            printf("The time required to reach Narayanganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 10:
        {
            printf("The distance between DSC to Narsingdi is 234.5 Km.\n");
            printf("The time required to reach Narsingdi is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 11:
        {
            printf("The distance between DSC to Rajbari is 234.5 Km.\n");
            printf("The time required to reach Rajbari is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 12:
        {
            printf("The distance between DSC to Shariatpur is 234.5 Km.\n");
            printf("The time required to reach Shariatpur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 13:
        {
            printf("The distance between DSC to Tangail is 234.5 Km.\n");
            printf("The time required to reach Tangail is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 14:{
            return;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
}

void Khulna_District(){
    printf("1. Bagerhat\n");
    printf("2. Chuadanga\n");
    printf("3. Jashore\n");
    printf("4. Jhenaidah\n");
    printf("5. Khulna\n");
    printf("6. Kushtia\n");
    printf("7. Magura\n");
    printf("8. Meherpur\n");
    printf("9. Narail\n");
    printf("10. Satkhira\n");
    printf("11. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        {
            printf("The distance between DSC to Bagerhat is 234.5 Km.\n");
            printf("The time required to reach Bagerhat is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 2:
        {
            printf("The distance between DSC to Chuadanga is 234.5 Km.\n");
            printf("The time required to reach Chuadanga is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 3:
        {
            printf("The distance between DSC to Jashore is 234.5 Km.\n");
            printf("The time required to reach Jashore is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 4:
        {
            printf("The distance between DSC to Jhenaidah is 234.5 Km.\n");
            printf("The time required to reach Jhenaidah is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 5:
        {
            printf("The distance between DSC to Khulna is 234.5 Km.\n");
            printf("The time required to reach Khulna is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 6:
        {
            printf("The distance between DSC to Kushtia is 234.5 Km.\n");
            printf("The time required to reach Kushtia is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 7:
        {
            printf("The distance between DSC to Magura is 234.5 Km.\n");
            printf("The time required to reach Magura is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 8:
        {
            printf("The distance between DSC to Meherpur is 234.5 Km.\n");
            printf("The time required to reach Meherpur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 9:
        {
            printf("The distance between DSC to Narail is 234.5 Km.\n");
            printf("The time required to reach Narail is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 10:
        {
            printf("The distance between DSC to Satkhira is 234.5 Km.\n");
            printf("The time required to reach Satkhira is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 11:{
            return;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
}

void Mymensingh_District(){
    printf("1. Jamalpur\n");
    printf("2. Mymensingh\n");
    printf("3. Netrokona\n");
    printf("4. Sherpur\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        {
            printf("The distance between DSC to Jamalpur is 234.5 Km.\n");
            printf("The time required to reach Jamalpur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 2:
        {
            printf("The distance between DSC to Mymensingh is 234.5 Km.\n");
            printf("The time required to reach Mymensingh is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 3:
        {
            printf("The distance between DSC to Netrokona is 234.5 Km.\n");
            printf("The time required to reach Netrokona is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 4:
        {
            printf("The distance between DSC to Sherpur is 234.5 Km.\n");
            printf("The time required to reach Sherpur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 5:{
            return;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
}

void Rajshahi_District(){
    printf("1. Bogura\n");
    printf("2. Chapainawabganj\n");
    printf("3. Joypurhat\n");
    printf("4. Naogaon\n");
    printf("5. Natore\n");
    printf("6. Pabna\n");
    printf("7. Rajshahi\n");
    printf("8. Sirajganj\n");
    printf("9. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        {
            printf("The distance between DSC to Bogura is 234.5 Km.\n");
            printf("The time required to reach Bogura is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 2:
        {
            printf("The distance between DSC to Chapainawabganj is 234.5 Km.\n");
            printf("The time required to reach Chapainawabganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 3:
        {
            printf("The distance between DSC to Joypurhat is 234.5 Km.\n");
            printf("The time required to reach Joypurhat is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 4:
        {
            printf("The distance between DSC to Naogaon is 234.5 Km.\n");
            printf("The time required to reach Naogaon is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 5:
        {
            printf("The distance between DSC to Natore is 234.5 Km.\n");
            printf("The time required to reach Natore is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 6:
        {
            printf("The distance between DSC to Pabna is 234.5 Km.\n");
            printf("The time required to reach Pabna is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 7:
        {
            printf("The distance between DSC to Rajshahi is 234.5 Km.\n");
            printf("The time required to reach Rajshahi is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 8:
        {
            printf("The distance between DSC to Sirajganj is 234.5 Km.\n");
            printf("The time required to reach Sirajganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 9:{
            return;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
}

void Rangpur_District(){
    printf("1. Dinajpur\n");
    printf("2. Gaibandha\n");
    printf("3. Kurigram\n");
    printf("4. Lalmonirhat\n");
    printf("5. Nilphamari\n");
    printf("6. Panchagarh\n");
    printf("7. Rangpur\n");
    printf("8. Thakurgaon\n");
    printf("9. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        {
            printf("The distance between DSC to Dinajpur is 234.5 Km.\n");
            printf("The time required to reach Dinajpur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 2:
        {
            printf("The distance between DSC to Gaibandha is 234.5 Km.\n");
            printf("The time required to reach Gaibandha is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 3:
        {
            printf("The distance between DSC to Kurigram is 234.5 Km.\n");
            printf("The time required to reach Kurigram is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 4:
        {
            printf("The distance between DSC to Lalmonirhat is 234.5 Km.\n");
            printf("The time required to reach Lalmonirhat is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 5:
        {
            printf("The distance between DSC to Nilphamari is 234.5 Km.\n");
            printf("The time required to reach Nilphamari is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 6:
        {
            printf("The distance between DSC to Panchagarh is 234.5 Km.\n");
            printf("The time required to reach Panchagarh is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 7:
        {
            printf("The distance between DSC to Rangpur is 234.5 Km.\n");
            printf("The time required to reach Rangpur is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 8:
        {
            printf("The distance between DSC to Thakurgaon is 234.5 Km.\n");
            printf("The time required to reach Thakurgaon is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 9:{
            return;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
}

void Sylhet_District(){
    printf("1. Habiganj\n");
    printf("2. Moulvibazar\n");
    printf("3. Sunamganj\n");
    printf("4. Sylhet\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        {
            printf("The distance between DSC to Habiganj is 234.5 Km.\n");
            printf("The time required to reach Habiganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 2:
        {
            printf("The distance between DSC to Moulvibazar is 234.5 Km.\n");
            printf("The time required to reach Moulvibazar is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 3:
        {
            printf("The distance between DSC to Sunamganj is 234.5 Km.\n");
            printf("The time required to reach Sunamganj is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 4:
        {
            printf("The distance between DSC to Sylhet is 234.5 Km.\n");
            printf("The time required to reach Sylhet is 5 hours 51 minutes in 40 km/h speed.\n");
            break;
        }
        case 5:{
            return;
        }
        default:
        {
            printf("Invalid choice\n");
        }
    }
}