SELECT firstName, lastName, city,state from Person
left JOIN Address on Person.personID = Address.personId
