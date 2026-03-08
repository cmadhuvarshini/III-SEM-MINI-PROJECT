#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Flight {
public:
	string flightName = "Default Flight";
	string departureTime = "00:00 AM";
	string arrivalTime = "00:00 AM";
	int flightNumber = 0;
	string cityName = "Default City";
	int totalSeats = 50;
	int availableSeats = 50;
};
class Passenger {
public:
	string name;
	int flightNumber = 0;
	string departureTime = "00:00 AM";
	string arrivalTime = "00:00 AM";
	string flightName = "Default Flight";
	string cityName = "Default City";
	int numberOfSeats = 0;
};
class ReservationSystem {
public:
	Flight flights[25];
	Passenger* reservations[50];
	int reservationCount = 0;
	ReservationSystem() {
		flights[0].cityName = "London";
		flights[0].flightName = "Air India";
		flights[0].departureTime = "10:00 AM";
		flights[0].arrivalTime = "12:00 PM";
		flights[0].flightNumber = 143;
		flights[1].cityName = "Maldives";
		flights[1].flightName = "Emirates";
		flights[1].departureTime = "12:00 PM";
		flights[1].arrivalTime = "2:00 AM";
		flights[1].flightNumber = 550;
		flights[2].cityName = "South Korea";
		flights[2].flightName = "Korean Air";
		flights[2].departureTime = "4:00 PM";
		flights[2].arrivalTime = "6:00 PM";
		flights[2].flightNumber = 180;
		flights[3].cityName = "Paris";
		flights[3].flightName = "Air India";
		flights[3].departureTime = "1:00 PM";
		flights[3].arrivalTime = "3:00 PM";
		flights[3].flightNumber = 111;
		flights[4].cityName = "Japan";
		flights[4].flightName = "Japan Airlines";
		flights[4].departureTime = "2:00 PM";
		flights[4].arrivalTime = "10:00 PM";
		flights[4].flightNumber = 131;
		flights[5].cityName = "London";
		flights[5].flightName = "British Airways";
		flights[5].departureTime = "09:00 AM";
		flights[5].arrivalTime = "11:50 AM";
		flights[5].flightNumber = 123;
		flights[6].cityName = "London";
		flights[6].flightName = "Virgin Atlantic";
		flights[6].departureTime = "10:30 AM";
		flights[6].arrivalTime = "1:00 PM";
		flights[6].flightNumber = 456;
		flights[7].cityName = "London";
		flights[7].flightName = "American Airlines";
		flights[7].departureTime = "12:00 PM";
		flights[7].arrivalTime = "3:30 PM";
		flights[7].flightNumber = 789;
		flights[8].cityName = "London";
		flights[8].flightName = "Delta Airlines";
		flights[8].departureTime = "01:30 PM";
		flights[8].arrivalTime = "5:00 PM";
		flights[8].flightNumber = 321;
		flights[9].cityName = "Maldives";
		flights[9].flightName = "Qatar Airways";
		flights[9].departureTime = "01:00 PM";
		flights[9].arrivalTime = "5:20 PM";
		flights[9].flightNumber = 202;
		flights[10].cityName = "Maldives";
		flights[10].flightName = "SriLankan Airlines";
		flights[10].departureTime = "03:00 PM";
		flights[10].arrivalTime = "7:00 PM";
		flights[10].flightNumber = 303;
		flights[11].cityName = "Maldives";
		flights[11].flightName = "SriLankan Airlines";
		flights[11].departureTime = "03:00 PM";
		flights[11].arrivalTime = "7:00 PM";
		flights[11].flightNumber = 303;
		flights[12].cityName = "Maldives";
		flights[12].flightName = "Maldivian Airlines";
		flights[12].departureTime = "04:30 PM";
		flights[12].arrivalTime = "8:30 PM";
		flights[12].flightNumber = 404;
		flights[13].cityName = "South Korea";
		flights[13].flightName = "Asiana Airlines";
		flights[13].departureTime = "11:00 PM";
		flights[13].arrivalTime = "5:20 PM";
		flights[13].flightNumber = 456;
		flights[14].cityName = "South Korea";
		flights[14].flightName = "Asiana Airlines";
		flights[14].departureTime = "11:00 PM";
		flights[14].arrivalTime = "5:20 PM";
		flights[14].flightNumber = 456;
		flights[15].cityName = "South Korea";
		flights[15].flightName = "Delta Airlines";
		flights[15].departureTime = "12:30 PM";
		flights[15].arrivalTime = "6:10 PM";
		flights[15].flightNumber = 789;
		flights[16].cityName = "South Korea";
		flights[16].flightName = "American Airlines";
		flights[16].departureTime = "01:00 PM";
		flights[16].arrivalTime = "7:00 PM";
		flights[16].flightNumber = 222;
		flights[17].cityName = "Paris";
		flights[17].flightName = "Air France";
		flights[17].departureTime = "08:00 AM";
		flights[17].arrivalTime = "10:30 AM";
		flights[17].flightNumber = 001;
		flights[18].cityName = "Japan";
		flights[18].flightName = "American Airlines";
		flights[18].departureTime = "01:00 PM";
		flights[18].arrivalTime = "7:00 PM";
		flights[18].flightNumber = 440;
		flights[19].cityName = "Paris";
		flights[19].flightName = "United Airlines";
		flights[19].departureTime = "09:15 AM";
		flights[19].arrivalTime = "12:00 PM";
		flights[19].flightNumber = 002;
		flights[20].cityName = "Paris";
		flights[20].flightName = "Lufthansa";
		flights[20].departureTime = "11:45 AM";
		flights[20].arrivalTime = "2:30 PM";
		flights[20].flightNumber = 003;
		flights[21].cityName = "Paris";
		flights[21].flightName = "British Airways";
		flights[21].departureTime = "10:30 AM";
		flights[21].arrivalTime = "1:15 PM";
		flights[21].flightNumber = 004;
		flights[22].cityName = "Japan";
		flights[22].flightName = "All Nippon Airways";
		flights[22].departureTime = "07:50 AM";
		flights[22].arrivalTime = "1:30 PM";
		flights[22].flightNumber = 110;
		flights[23].cityName = "Japan";
		flights[23].flightName = "United Airlines";
		flights[23].departureTime = "10:15 AM";
		flights[23].arrivalTime = "4:30 PM";
		flights[23].flightNumber = 220;
		flights[24].cityName = "Japan";
		flights[24].flightName = "Delta Airlines";
		flights[24].departureTime = "11:30 AM";
		flights[24].arrivalTime = "5:00 PM";
		flights[24].flightNumber = 330;
		for (int i = 0; i < 50; ++i) {
			reservations[i] = NULL;
		}
		loadReservationsFromFile();
	}
	void addReservation(string name, int flightNum, int seats);
	void displayReservations();
	void saveReservationsToFile();
	void loadReservationsFromFile();
	void displayAvailableFlights();
	void deleteReservation(string name);
	~ReservationSystem() {
		saveReservationsToFile();
		for (int i = 0; i < reservationCount; ++i) {
			delete reservations[i];
		}
	}
};
void ReservationSystem::saveReservationsToFile() {
	ofstream outFile("reservations.txt");
	for (int i = 0; i < reservationCount; ++i) {
		if (reservations[i] != NULL) {
			outFile << reservations[i]->name << "\n"
			        << reservations[i]->flightNumber << "\n"
			        << reservations[i]->numberOfSeats << "\n"
			        << reservations[i]->cityName << "\n"
			        << reservations[i]->flightName << "\n"
			        << reservations[i]->departureTime << "\n"
			        << reservations[i]->arrivalTime << "\n";
		}
	}
	outFile.close();
}
void ReservationSystem::loadReservationsFromFile() {
	ifstream inFile("reservations.txt");
	string name, cityName, flightName, departureTime, arrivalTime;
	int flightNumber, seats;
	while (inFile >> name >> flightNumber >> seats >> cityName >>
	        flightName >> departureTime >> arrivalTime) {
		Passenger* newPassenger = new Passenger();
		newPassenger->name = name;
		newPassenger->flightNumber = flightNumber;
		newPassenger->numberOfSeats = seats;
		newPassenger->cityName = cityName;
		newPassenger->flightName = flightName;
		newPassenger->departureTime = departureTime;
		newPassenger->arrivalTime = arrivalTime;
		for (int i = 0; i < 25; ++i) {
			if (flights[i].flightNumber == flightNumber) {
				flights[i].availableSeats -= seats;
				break;
			}
		}
		reservations[reservationCount++] = newPassenger;
	}
	inFile.close();
}
void ReservationSystem::addReservation(string name, int flightNum, int
                                       seats) {
	if (reservationCount >= 50) {
		cout << "Reservation list is full." << endl;
		return;
	}
	for (int i = 0; i < 25; ++i) {
		if (flights[i].flightNumber == flightNum) {
			if (flights[i].availableSeats >= seats) {
				Passenger* newPassenger = new Passenger();
				newPassenger->name = name;
				newPassenger->cityName = flights[i].cityName;
				newPassenger->flightNumber = flightNum;
				newPassenger->departureTime =
				    flights[i].departureTime;
				newPassenger->arrivalTime =
				    flights[i].arrivalTime;
				newPassenger->flightName = flights[i].flightName;
				newPassenger->numberOfSeats = seats;
				flights[i].availableSeats -= seats;
				reservations[reservationCount++] = newPassenger;
				cout << "\nReservation added for " << name << " on
				     flight " << flightNum
				     << " with " << seats << " seats." << endl;
				return;
			} else {
				cout << "\nNot enough seats available. Available
     seats: " << flights[i].availableSeats << endl;
				     return;
			}
		}
	}
	cout << "\nFlight number " << flightNum << " not found." << endl;
}
void ReservationSystem::displayReservations() {
	if (reservationCount == 0) {
		cout << "\nNo reservations found." << endl;
		return;
	}
	cout << "\nPassenger Reservations:\n\n";
	for (int i = 0; i < reservationCount; ++i) {
		if (reservations[i] != NULL) {
			cout << "\nName: " << reservations[i]->name << "\n"
			     << "Destination: " << reservations[i]->cityName <<
			     "\n"
			     << "Flight Name: " << reservations[i]->flightName
			     << "\n"
			     << "Flight Number: " << reservations[i]-
			     >flightNumber << "\n"
			     << "Departure Time: " << reservations[i]-
			     >departureTime << "\n"
			     << "Arrival Time: " << reservations[i]->arrivalTime
			     << "\n"
			     << "Seats Booked: " << reservations[i]-
			     >numberOfSeats << "\n\n";
		}
	}
}
void ReservationSystem::displayAvailableFlights() {
	cout << "Available Flights:\n\n";
	for (int i = 0; i < 25; ++i) {
		cout << "\nDestination: " << flights[i].cityName << "\n"
		     << "Flight Name: " << flights[i].flightName << "\n"
		     << "Flight Number: " << flights[i].flightNumber << "\n"
		     << "Departure Time: " << flights[i].departureTime <<
		     "\n"
		     << "Arrival Time: " << flights[i].arrivalTime << "\n"
		     << "Available Seats: " << flights[i].availableSeats <<
		     "\n\n";
	}
}
void ReservationSystem::deleteReservation(string name) {
	for (int i = 0; i < reservationCount; ++i) {
		if (reservations[i] != NULL && reservations[i]->name == name)
		{
			flights[reservations[i]->flightNumber].availableSeats +=
			    reservations[i]->numberOfSeats; // Revert available seats
			delete reservations[i];
			for (int j = i; j < reservationCount - 1; ++j) {
				reservations[j] = reservations[j + 1];
			}
			reservations[--reservationCount] = NULL;
			cout << "\nReservation deleted for " << name << endl;
			return;
		}
	}
	cout << "\nReservation not found for " << name << endl;
}
class EReservation {
private:
	struct User {
		string username;
		string password;
		User* next;
		User* prev;
	};
	User* head;
	User* tail;
	bool isLoggedIn;
	string currentUser;
public:
	EReservation() {
		head = NULL;
		tail = NULL;
		isLoggedIn = false;
		loadUsers();
	}
	void loadUsers() {
		ifstream inFile("users.txt");
		string username, password;
		while (inFile >> username >> password) {
			User* newUser = new User();
			newUser->username = username;
			newUser->password = password;
			newUser->next = head;
			newUser->prev = NULL;
			if (head != NULL) {
				head->prev = newUser;
			}
			head = newUser;
			if (tail == NULL) {
				tail = newUser;
			}
		}
		inFile.close();
	}
	void login();
	void registerUser();
	void menu(ReservationSystem& rs);
	void deleteList();
	void chooseTourPackage(ReservationSystem& rs);
	void handleFlightBooking(ReservationSystem& rs, string
	                         destination);
	~EReservation() {
		deleteList();
	}
};
void EReservation::deleteList() {
	User* current = head;
	while (current != NULL) {
		User* nextNode = current->next;
		delete current;
		current = nextNode;
	}
}
void EReservation::registerUser() {
	string username, password;
	cout << "ENTER YOUR USERNAME:\n";
	cin >> username;
	cout << "ENTER YOUR PASSWORD:\n";
	cin >> password;
	User* current = head;
	while (current != NULL) {
		if (current->username == username) {
			cout << "Username already exists. Please choose a
			     different one.\n";
			     return;
		}
		current = current->next;
	}
	User* newUser = new User();
	newUser->username = username;
	newUser->password = password;
	newUser->next = head;
	newUser->prev = NULL;
	if (head != NULL) {
		head->prev = newUser;
	}
	head = newUser;
	if (tail == NULL) {
		tail = newUser;
	}
	ofstream outFile("users.txt", ios::app);
	outFile << username << " " << password << endl;
	outFile.close();
	cout << "Registration successful!\n";
}
void EReservation::login() {
	string inputUsername, inputPassword;
	cout << "ENTER USERNAME:\n";
	cin >> inputUsername;
	cout << "ENTER YOUR PASSWORD:\n";
	cin >> inputPassword;
	User* current = head;
	while (current != NULL) {
		if (current->username == inputUsername && current->password
		        == inputPassword) {
			cout << "Login successful! Welcome, " << inputUsername
			     << "!\n";
			isLoggedIn = true;
			currentUser = inputUsername;
			return;
		}
		current = current->next;
	}
	cout << "Invalid username or password. Please try again.\n";
}
void EReservation::chooseTourPackage(ReservationSystem& rs) {
	cout << "Choosing Tour Package...\n\n";
	cout << "Available Tour Packages:\n\n";
	cout << "1. London: The Capital of Dreams\n";
	cout << "2. Maldives: The Jewel of the Indian Ocean\n";
	cout << "3. South Korea: The Heartbeat of Asia\n";
	cout << "4. Paris: A Dream in Every Corner\n";
	cout << "5. Japan: Where Tradition Meets Innovation\n\n";
	int choice;
	cout << "Select a tour package: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "\nYou have selected the London Tour Package.\nGood
		     choice!!!!!!\n";
		     handleFlightBooking(rs, "London");
		break;
	case 2:
		cout << "\nYou have selected the Maldives Tour Package.\nGood
		     choice!!!!!!\n";
		     handleFlightBooking(rs, "Maldives");
		break;
	case 3:
		cout << "\nYou have selected the South Korea Tour
		     Package.\nGood choice!!!!!!\n";
		     handleFlightBooking(rs, "South Korea");
		break;
	case 4:
		cout << "\nYou have selected the Paris Tour Package.\nGood
		     choice!!!!!!\n";
		     handleFlightBooking(rs, "Paris");
		break;
	case 5:
		cout << "\nYou have selected the Japan Tour Package.\nGood
		     choice!!!!!!\n";
		     handleFlightBooking(rs, "Japan");
		break;
	default:
		cout << "\nInvalid choice. Please try again.\n";
		return;
	}
}
void EReservation::handleFlightBooking(ReservationSystem& rs,string
                                       destination) {
	int flightChoice;
	do {
		cout << "\t\t ----------------------------------------\n";
		cout << "\t\t Airline Reservation Menu for " << destination <<
		     "\n";
		cout << "\t\t ----------------------------------------\n";
		cout << "\t\t 1. Display Available Flights \n";
		cout << "\t\t 2. Add Reservation \n";
		cout << "\t\t 3. View Reservations \n";
		cout << "\t\t 4. Delete Reservation \n";
		cout << "\t\t 5. View your Itinerary \n";
		cout << "\t\t 0. Back to Main Menu \n";
		cout << "\t\t ----------------------------------------\n";
		cout << "Enter your choice: ";
		cin >> flightChoice;
		switch (flightChoice) {
		case 1: {
			for (int i = 0; i < 25; ++i) {
				if (rs.flights[i].cityName == destination) {
					cout << "Flight Name: " <<
					     rs.flights[i].flightName << "\n"
					     << "Flight Number: " <<
					     rs.flights[i].flightNumber << "\n"
					     << "Departure Time: " <<
					     rs.flights[i].departureTime << "\n"
					     << "Arrival Time: " <<
					     rs.flights[i].arrivalTime << "\n"
					     << "Available Seats: " <<
					     rs.flights[i].availableSeats << "\n\n";
				}
			}
			break;
		}
		case 2: {
			string name;
			int flightNum, seats;
			cout << "Enter passenger name: ";
			cin >> name;
			cout << "Enter flight number: ";
			cin >> flightNum;
			cout << "Enter number of seats to book: ";
			cin >> seats;
			rs.addReservation(name, flightNum, seats);
			break;
		}
		case 3:
			rs.displayReservations();
			break;
		case 4: {
			string name;
			cout << "Enter passenger name to delete: ";
			cin >> name;
			rs.deleteReservation(name);
			break;
		}
		case 5: {
			if (destination=="London") {
				cout << "\n London: The Capital of Dream -
				     Itinerary (9 Nights, 10 Days)\n\n";
				     cout << "1. **Day 1: Arrival in London**\n";
				cout << " - Navigate to your hotel and settle
				     in.\n";
				     cout << " - Explore the local area, such as
				     Covent Garden.\n\n";
				     cout << "2. **Day 2: Tower of London & Tower
				     Bridge**\n";
				     cout << " - Take the Tube to Tower Hill
				     station.\n";
				     cout << " - Visit the Tower of London and walk
				     across Tower Bridge.\n\n";
				     cout << "3. **Day 3: British Museum & Covent
				     Garden**\n";
				     cout << " - Take the Tube to Tottenham Court
				     Road station.\n";
				     cout << " - Tour the British Museum and spend
				     the afternoon in Covent Garden.\n\n";
				     cout << "4. **Day 4: Windsor Castle**\n";
				cout << " - Take a train from Paddington Station
				     to Windsor & Eton Central.\n";
				     cout << " - Spend the day exploring Windsor
				     Castle.\n\n";
				     cout << "5. **Day 5: Natural History Museum & Hyde
				     Park**\n";
				     cout << " - Take the Tube to South Kensington
				     station.\n";
				     cout << " - Visit the Natural History Museum and
				     enjoy a walk in Hyde Park.\n\n";
				     cout << "6. **Day 6: West End Shows &
				     Shopping**\n";
				     cout << " - Take the Tube to Leicester Square
				     station.\n";
				     cout << " - Spend the day shopping and watching
				     a show in the West End.\n\n";
				     cout << "7. **Day 7: Free Exploration Day**\n";
				cout << " - Explore Camden Market, Notting Hill,
				     or other areas of interest.\n\n";
				     cout << "8. **Day 8: Victoria and Albert Museum &
				     Kensington Palace**\n";
				     cout << " - Take the Tube to South Kensington
				     station.\n";
				     cout << " - Visit the Victoria and Albert Museum
				     and Kensington Palace.\n\n";
				     cout << "9. **Day 9: Oxford or Cambridge Day
				     Trip**\n";
				     cout << " - Take a train from Paddington or
				     King's Cross to Oxford or Cambridge.\n";
				     cout << " - Spend the day exploring the
				     university town.\n\n";
				     cout << "10. **Day 10: Departure**\n";
				cout << " - Navigate to the airport for your
    flight home :
				     )\n\n";
			}
			else if(destination=="Maldives") {
				cout << "\n Maldives: The Jewel of the
				     Indian Ocean - Itinerary (9 Nights, 10 Days)\n\n";
				     cout << "1. **Day 1: Arrival in Maldives**\n";
				cout << " - Transfer to your resort and settle
				     in.\n";
				     cout << " - Relax on the beach.\n\n";
				cout << "2. **Day 2: Snorkeling and Beach
				     Activities**\n";
				     cout << " - Participate in snorkeling activities
				     offered by your resort.\n\n";
				     cout << "3. **Day 3: Local Markets and Cultural
				     Sites**\n";
				     cout << " - Take a boat trip to MalCB) and
				     explore the local markets.\n";
				     cout << "4. **Day 4: Spa Day and Wellness
				     Activities**\n\n";
				     cout << " - Enjoy a spa day at your
				     resort.\n\n";
				     cout << "5. **Day 5: Island Hopping and Water
				     Sports**\n";
				     cout << " - Arrange an island-hopping tour with
				     your resort.\n\n";
				     cout << "6. **Day 6: Underwater Dining
				     Experience**\n";
				     cout << " - Reserve a table at an underwater
				     restaurant.\n\n";
				     cout << "7. **Day 7: Free Exploration Day**\n";
				cout << " - Relax or explore at your
				     leisure.\n\n";
				     cout << "8. **Day 8: Additional Beach
				     Activities**\n";
				     cout << " - Enjoy more beach activities or water
				     sports.\n\n";
				     cout << "9. **Day 9: Cultural Exploration and
				     Shopping**\n";
				     cout << " - Visit more cultural sites or do some
				     shopping.\n\n";
				     cout << "10. **Day 10: Departure**\n";
				cout << " - Transfer to the airport for your
    flight home :
				     )\n\n";
			}
			else if(destination=="South Korea") {
				cout << "\n South Korea: The Heartbeat of Asia -
				     Itinerary (9 Nights, 10 Days)\n\n";
				     cout << "1. **Day 1: Arrival in Seoul**\n\n";
				cout << " - Transfer to your hotel and settle
				     in.\n";
				     cout << " - Explore the local area.\n\n";
				cout << "2. **Day 2: Gyeongbokgung Palace &
				     Bukchon Hanok Village**\n";
				     cout << " - Take the subway to Gyeongbokgung
				     Station.\n";
				     cout << " - Visit Gyeongbokgung Palace and
				     Bukchon Hanok Village.\n\n";
				     cout << "3. **Day 3: Jeju Island Day Trip**\n";
				cout << " - Fly to Jeju Island and explore its
				     natural beauty.\n\n";
				     cout << "4. **Day 4: Myeongdong Shopping and
				     Street Food**\n";
				     cout << " - Take the subway to Myeongdong
				     Station.\n";
				     cout << " - Spend the day shopping and enjoying
				     street food.\n\n";
				     cout << "5. **Day 5: N Seoul Tower & Hangang
				     Park**\n";
				     cout << " - Take the subway to Myeongdong
				     Station and then the Namsan Cable Car.\n";
				     cout << " - Visit N Seoul Tower and walk along
				     Hangang Park.\n\n";
				     cout << "6. **Day 6: Cultural Experiences and
				     Traditional Markets**\n";
				     cout << " - Visit traditional markets like
				     Namdaemun Market.\n\n";
				     cout << "7. **Day 7: Free Exploration Day**\n";
				cout << " - Explore Dongdaemun Design Plaza or
				     other attractions.\n\n";
				     cout << "8. **Day 8: Petite France & Nami
				     Island**\n";
				     cout << " - Take a day trip to Petite France and
				     Nami Island.\n\n";
				     cout << "9. **Day 9: Busan Day Trip**\n";
				cout << " - Take a KTX train to Busan and
				     explore the coastal city.\n\n";
				     cout << "10. **Day 10: Departure**\n";
				cout << " - Transfer to the airport for your
    flight home :
				     )\n\n";
			}
			else if(destination=="Paris") {
				cout << "\n Paris: A Dream in Every Corner -
				     Itinerary (9 Nights, 10 Days)\n\n";
				     cout << "1. **Day 1: Arrival in Paris**\n";
				cout << " - Transfer to your hotel and settle
				     in.\n";
				     cout << " - Explore the local area, such as
				     Montmartre.\n\n";
				     cout << "2. **Day 2: Eiffel Tower & Seine River
				     Cruise**\n";
				     cout << " - Take the Metro to TrocadCB)ro.\n";
				cout << " - Visit the Eiffel Tower and enjoy a
				     Seine River cruise.\n\n";
				     cout << "3. **Day 3: Louvre Museum & Tuileries
				     Garden**\n";
				     cout << " - Take the Metro to Palais Royal -
				     MusCB)e du Louvre.\n";
				     cout << " - Tour the Louvre Museum and relax in
				     the Tuileries Garden.\n\n";
				     cout << "4. **Day 4: Versailles Palace Day
				     Trip**\n";
				     cout << " - Take the RER C train to Versailles
				     ChCB"teau.\n";
				     cout << " - Spend the day exploring the Palace
				     of Versailles.\n\n";
				     cout << "5. **Day 5: Montmartre & SacrCB)-CCb ur
				     Basilica**\n";
				     cout << " - Take the Metro to Anvers or
				     Abbesses.\n";
				     cout << " - Explore Montmartre and visit the
				     SacrCB)-CCb ur Basilica.\n\n";
				     cout << "6. **Day 6: Notre-Dame Cathedral & Latin
				     Quarter**\n";
				     cout << " - Take the Metro to CitCB) or Sainto?>Michel.\n";
				cout << " - Visit Notre-Dame Cathedral and
				     explore the Latin Quarter.\n\n";
				     cout << "7. **Day 7: Free Exploration Day**\n";
				cout << " - Visit the Luxembourg Gardens or
				     other attractions.\n\n";
				     cout << "8. **Day 8: MusCB)e d'Orsay & Sainto?>Germain-des-PrCB)s**\n";
				cout << " - Take the Metro to SolfCB)rino or
				     MusCB)e d'Orsay.\n";
				     cout << " - Visit the MusCB)e d'Orsay and explore
				     Saint-Germain-des-PrCB)s.\n\n";
				     cout << "9. **Day 9: Disneyland Paris Day
				     Trip**\n";
				     cout << " - Take the RER A train to Marne-lao?>VallCB)e - Chessy.\n";
				cout << " - Spend the day at Disneyland
				     Paris.\n\n";
				     cout << "10. **Day 10: Departure**\n";
				cout << " - Navigate to the airport for your
    flight home :
				     )\n\n";
			}
			else if(destination=="Japan") {
				cout << "\n Japan: Where Tradition Meets
				     Innovation - Itinerary (9 Nights, 10 Days)\n\n";
				     cout << "1. **Day 1: Arrival in Tokyo**\n";
				cout << " - Transfer to your hotel and settle
				     in.\n";
				     cout << " - Explore the local area.\n\n";
				cout << "2. **Day 2: Tokyo Tower & Asakusa
				     Temple**\n";
				     cout << " - Take the subway to Akabanebashi
				     Station for Tokyo Tower.\n";
				     cout << " - Visit Sensoji Temple in
				     Asakusa.\n\n";
				     cout << "3. **Day 3: Hakone Day Trip**\n";
			cout << " - Take the train to Hakone and enjoy
			     the hot springs and views.\n\n";
			     cout << "4. **Day 4: Shibuya & Harajuku**\n";
			cout << " - Take the subway to Shibuya
			     Station.\n";
			     cout << " - Explore Shibuya and walk to
			     Harajuku.\n\n";
			     cout << "5. **Day 5: Imperial Palace & Ginza**\n";
			cout << " - Take the subway to Tokyo Station for
			     the Imperial Palace.\n";
			     cout << " - Shop in the Ginza district.\n\n";
			cout << "6. **Day 6: Kyoto Day Trip**\n";
			cout << " - Take the Shinkansen to Kyoto.\n";
			cout << " - Visit Kinkaku-ji, Fushimi Inari
			     Shrine, and other sites.\n\n";
			     cout << "7. **Day 7: Free Exploration Day**\n";
			cout << " - Explore Akihabara or other
			     areas.\n\n";
			     cout << "8. **Day 8: Nara Park & Todai-ji
			     Temple**\n";
			     cout << " - Take the train to Nara and visit
			     Nara Park and Todai-ji Temple.\n\n";
			     cout << "9. **Day 9: Osaka Day Trip**\n";
			cout << " - Take the train to Osaka.\n";
			cout << " - Visit Osaka Castle and
			     Dotonbori.\n\n";
			     cout << "10. **Day 10: Departure**\n";
			cout << " - Transfer to the airport for your
    flight home :
			     )\n\n";
		}
		break;
	}
	case 0:
		break;
	default:
		cout << "Invalid choice. Please try again.\n";
		break;
	}
} while (flightChoice != 0);
}
void EReservation::menu(ReservationSystem& rs) {
	int choice;
	do {
		cout << "\t\t ------------------------------- \n";
		cout << "\t\t WELCOME TO E-RESERVATION SYSTEM \n";
		cout << "\t\t ------------------------------- \n";
		if (!isLoggedIn) {
			cout << "\t\t MENU \n";
			cout << "\t\t -------------------------------- \n";
			cout << "\t\t 1. Login Yourself \n";
			cout << "\t\t 2. Register \n";
			cout << "\t\t 0. Exit \n";
			cout << "\t\t -------------------------------- \n";
			cout << "Enter your choice: ";
			cin >> choice;
			switch (choice) {
			case 1:
				login();
				break;
			case 2:
				registerUser();
				break;
			case 0:
				cout << "Exiting...\n";
				break;
			default:
				cout << "Invalid choice. Please try again.\n";
				break;
			}
		} else {
			cout << "\t\t\t Welcome " << currentUser << "!\n\n";
			cout << "\t\t -------------------------------- \n";
			cout << "\t\t MENU \n";
			cout << "\t\t -------------------------------- \n";
			cout << "\t\t 1. Choose Your Tour Package \n";
			cout << "\t\t 2. Logout \n";
			cout << "\t\t 0. Exit \n";
			cout << "\t\t -------------------------------- \n";
			cout << "Enter your choice: ";
			cin >> choice;
			switch (choice) {
			case 1:
				chooseTourPackage(rs);
				break;
			case 2:
				isLoggedIn = false;
				currentUser = "";
				cout << "Logged out successfully.\n";
				break;
			case 0:
				cout << "Exiting...\n";
				break;
			default:
				cout << "Invalid choice. Please try again.\n";
				break;
			}
		}
	} while (choice != 0);
}
int main() {
	ReservationSystem rs;
	EReservation eReg;
	eReg.menu(rs);
	return 0;
}