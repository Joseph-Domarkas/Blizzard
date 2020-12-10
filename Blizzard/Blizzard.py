

class Blizzard___class___ ( ):
	
	def tokenize (self, data):
		
		for item in self. file__data__:
			if item == "Q":
				print (item)
				self. status = True
				self. depth += 1
			elif self. status and self. depth > 0:
				if item in ['{', '}']:
					print (item)
		
		print (self. file__data__)
		
	
	def compile (self, unique_resource_identifier):
		
		self. file__active__ = unique_resource_identifier
		self. file__handle__ = open (unique_resource_identifier)
		self. file__data__ = self. file__handle__. read ( )
		
		self. status = False
		self. depth = 0
		
		self. tokenize (self. file__data__)
	
	
	def __repr__ (self):
		return self. version
	
	def __init__ (self):
		self. version = "Blizzard: x86_64, „Arctic frost“;"
		print ("{}.". format (self))
	

if __name__ == "__main__":
	
	Blizzard = Blizzard___class___ ( )
	
	Blizzard. compile ("object/Q.q")
	
