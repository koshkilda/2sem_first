#include <iostream>
#include <string>
#include "253route.h" // включение headerа с объявлением classa

using namespace std;

Route::Route() { // определение classa
    source_ = "Moscow";
    destination_ = "Saint Petersburg";
    UpdateLength();
}

Route::Route(const string& new_source, const string& new_destination) {
    source_ = new_source;
    destination_ = new_destination;
    UpdateLength();
}

Route::~Route() {
    cout << "Used the route from " << source_ << " to " << destination_ << " (length = " << length_ << " meters)" << endl;
}

string Route::GetSource() const { return source_; }

string Route::GetDestination() const { return destination_; }

int Route::GetLength() const { return length_; }

void Route::SetSource(const string& new_source) {
    source_ = new_source;
    UpdateLength();
}

void Route::SetDestination(const string& new_destination) {
    destination_ = new_destination;
    UpdateLength();
}

void Route::UpdateLength() { length_ = ComputeDistance(source_, destination_); }

int Route::ComputeDistance(string source, string destination) {return 1000;}

int main() { // сам main
    Route route1;
    Route route2;

    return 0;
}
