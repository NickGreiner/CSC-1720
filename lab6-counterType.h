class counterType
{
   public:
   // Function to initialize the counter //
   void initializeCounter();
   // Function to set the counter //
   void setCounter(int);
   // Function to get the current number from the counter //
   const int getCounter();
   // Function to increase the counter //
   void incrementCounter();
   // Function to decrease the counter //
   void decrementCounter();
   // Function to print (display) the counter //
   const void displayCounter();
   // Constructor for counterType with int //
   counterType(int);
   // Default constructor for counterType //
   counterType();   

   private:
   // Counter integer initialization //
   int counter;
};
