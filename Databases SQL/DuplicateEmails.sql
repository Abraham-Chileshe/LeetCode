SELECT Email FROM Person group by Email HAVING count(Email) > 1
