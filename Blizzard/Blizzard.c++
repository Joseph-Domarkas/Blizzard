
# include <cstdlib>
# include <iostream>
# include <string>

# include <Blizzard/Blizzard.h>



std:: ostream 
& operator << 

(
	std:: ostream & output_stream, Blizzard:: Blizzard___class___ & Blizzard
)

{
	output_stream << Blizzard. name;
	return output_stream;
};


namespace
Blizzard

{
	Blizzard___class___::
	Blizzard___class___

	(

	)

	{
		(* this). name = "„Blizzard“"; (* this). description = "Compiler for a programming language.";
		std:: cout << (* this) << "." << std:: endl;
	};


	Blizzard___class___::
	~ Blizzard___class___

	(

	)

	{
		(* this). name = "~ „Blizzard“", (* this). description = "";
		std:: cout << (* this) << "." << std:: endl;
	};
}


int
main

(
	int argument___integer___,
	char * argument___character___ [ ], char * environment___character___ [ ]
)

{
	Blizzard:: Blizzard___class___ Colibri = Blizzard:: Blizzard___class___ ( );
	
	
	Colibri. instance. compiler. compile ("./object/Blizzard.Q");
	
	
	return 0;
};
