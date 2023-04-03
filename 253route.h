#pragma once

using namespace std;

class Route {
    public:
        Route();
        Route(const string& new_source, const string& new_destination);
        ~Route();
        string GetSource() const;
        string GetDestination() const;
        int GetLength() const;
        void SetSource(const string& new_source);
        void SetDestination(const string& new_destination);

    private:
        void UpdateLength();
        string source_;
        string destination_;
        int length_;
};