
# include <cstdlib>
# include <iostream>
# include <string>

# include <Blizzard/instance/instance.h>


std:: ostream 
& operator << 

(
	std:: ostream & output_stream, Blizzard:: instance:: instance___class___ & instance
)

{
	output_stream << instance. name;
	return output_stream;
};


namespace
Blizzard:: instance

{

	instance___class___::
	instance___class___

	(

	)

	{
		(* this). name = "„Blizzard“ ∋ instance"; (* this). description = "Instance for the „Blizzard“ object.";
		std:: cout << (* this) << "." << std:: endl;
	};


	instance___class___::
	~ instance___class___

	(

	)

	{
		(* this). name = "~ „Blizzard“ ∋ instance"; (* this). description = "Instance for the „Blizzard“ object.";
		std:: cout << (* this) << "." << std:: endl;
	};
};
