class TimeOfDay{
    public:
        TimeOfDay();
        // Creates a zero TimeOfDay object
        TimeOfDay(int initHours, int initMinutes, int initSeconds);
        // Creates a TimeOfDay object with the given time
        TimeOfDay increment() const;
        // Returns a TimeDay object that is incremented by one second
        void write() const;
        // Writes the timeOfDay object to cout
        bool equal(TimeOfDay otherTime) const;
        // Returns tres if this TimeOfDay object equals otherTime
        bool lessThan(TimeOfDay otherTime) const;
        // Returns true if this TimeOfDay object is earlier than otherTime
    private:
        int hours;
        int minutes;
        int seconds;
};