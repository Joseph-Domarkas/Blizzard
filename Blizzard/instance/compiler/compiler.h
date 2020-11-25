
# ifndef Blizzard_______Blizzard__instance__compiler__compiler___guard__________
	# define Blizzard_______Blizzard__instance__compiler__compiler___guard__________
	
	# include <iostream>
	# include <string>
	
	
	namespace
	Blizzard:: instance:: compiler
	
	{
		class
		compiler___class___
		
		{
			public:
				std:: string name, description;
				std:: string data;
				
				
				compiler___class___ ( );
				~ compiler___class___ ( );
				
				
				void
				compile
				
				(
					std:: string unique_resource_identifier
				);
				
				void
				compile
				
				(
					std:: string unique_resource_identifier, std:: string data
				);
			; private:
			
			; protected:
			
			;
		};
	};
# endif /* Blizzard_______Blizzard__instance__compiler__compiler___guard__________; */
