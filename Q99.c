Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;

    // Read date in dd/mm/yyyy format
    scanf("%s", date);

    // Extract day, month, year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Array of month names
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // Print in new format
    printf("%02d-%s-%d", day, months[month - 1], year);

    return 0;
}
