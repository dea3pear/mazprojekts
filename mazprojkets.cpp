// Mazais projekts
#include <iostream>
#include <string>

int main()
{
  std::string no;
  std::string uz;
  std::string con;
  float sum = 0;
  float itg = 0;
  bool state = true;
  std::cout << "--------------------" << std::endl;
  std::cout << "Valūtas konvertētājs" << std::endl;
  std::cout << "--------------------" << std::endl;
  while(state == true) {
        std::cout << "NO kādas valūtas vēlaties konvertēt naudu?(EUR,USD,GBP,RUB,JPY) ";
  std::cin >> no;
  std::cout << "UZ kādū valūtū vēlaties konvertēt naudu?(EUR,USD,GBP,RUB,JPY) ";
  std::cin >> uz;
  std::cout << "Cik daudz naudas vēlaties konvertēt? ";
  std::cin >> sum;
  if (sum > 0) {
      if (no == "EUR") {
      if (uz == "USD") {
         itg = sum * 1.133;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "GBP") {
         itg = sum * 0.848;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "RUB") {
         itg = sum * 83.286;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "JPY") {
         itg = sum * 129.37;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else {
          std::cout << "Nepareiza ievade!" << std::endl;
      }
  }
  else if (no == "USD") {
      if (uz == "EUR") {
         itg = sum * 0.88;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "GBP") {
         itg = sum * 0.75;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "RUB") {
         itg = sum * 73.72;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "JPY") {
         itg = sum * 113.68;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else {
          std::cout << "Nepareiza ievade!" << std::endl;
      }
  }
  else if (no == "GBP") {
      if (uz == "EUR") {
         itg = sum * 1.18;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "USD") {
         itg = sum * 1.33;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "RUB") {
         itg = sum * 98.25;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "JPY") {
         itg = sum * 151.52;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else {
          std::cout << "Nepareiza ievade!" << std::endl;
      }
  }
  else if (no == "RUB") {
      if (uz == "EUR") {
         itg = sum * 0.012;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "USD") {
         itg = sum * 0.014;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "GBP") {
         itg = sum * 0.01;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "JPY") {
         itg = sum * 1.54;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else {
          std::cout << "Nepareiza ievade!" << std::endl;
      }
  }
  else if (no == "JPY") {
      if (uz == "EUR") {
         itg = sum * 0.0078;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "USD") {
         itg = sum * 0.0088;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "GBP") {
         itg = sum * 0.0066;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else if (uz == "RUB") {
         itg = sum * 0.65;
         std::cout << sum << no << " ir vienādi ar " << itg << uz << std::endl;
      }
      else {
          std::cout << "Nepareiza ievade!" << std::endl;
      }
  }
  else {
     std::cout << "Nepareiza ievade!" << std::endl;
  }
  } else {
            std::cout << "Nepareiza ievade!" << std::endl;
      exit( 0 );
  }
 std::cout << "--------------------------------------------" << std:: endl;
 std::cout << "Vai vēlaties veikt citu operāciju?(ja or ne)" << std:: endl;
 std::cout << "--------------------------------------------" << std:: endl;
 std::cin >> con;
 if (con == "ne") {
     std::cout << "Paldies, ka izmantojāt mūsu programmu!";
     state = false;
 }
 else if (con == "ja"){
     state = true;
  }
 }
}
