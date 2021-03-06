-- 00 - Revising the Select Query I
-- Query all columns for all American cities in CITY with populations larger than 100000. The CountryCode for America is USA.

SELECT * 
FROM CITY 
WHERE 
    POPULATION > 100000 AND 
    COUNTRYCODE = 'USA';

-- 01 - Revising the Select Query II
-- Query the names of all American cities in CITY with populations larger than 120000. The CountryCode for America is USA.

SELECT NAME 
FROM CITY 
WHERE
    COUNTRYCODE = 'USA' AND
    POPULATION > 120000;

-- 02 - Select All
-- Query all columns (attributes) for every row in the CITY table.

select * 
from CITY;

-- 03 - Select By ID
-- Query all columns for a city in CITY with the ID 1661.

select *
from CITY
where 
    ID = 1661;

-- 04 - Japanese Cities' Attributes
-- Query all attributes of every Japanese city in the CITY table. The COUNTRYCODE for Japan is JPN.

select *
from CITY
where
    COUNTRYCODE = 'JPN';

-- 05 - Japanese Cities' Names
-- Query the names of all the Japanese cities in the CITY table. The COUNTRYCODE for Japan is JPN.

select NAME
from CITY
where
    COUNTRYCODE = 'JPN';

-- 06 - Weather Observation Station 1
-- Query a list of CITY and STATE from the STATION table.

select CITY, STATE
from STATION;

-- 07 - Weather Observation Station 3
-- Query a list of CITY names from STATION with even ID numbers only. You may print the results in any order, but must exclude duplicates from your answer.

SELECT DISTINCT(CITY) 
FROM STATION 
WHERE 
    MODE(ID, 2) = 0;

-- for MySQL   =>    SELECT DISTINCT(CITY) FROM STATION WHERE (ID%2)=0;

-- 08 - Weather Observation Station 4
-- Let N be the number of CITY entries in STATION, and let N' be the number of distinct CITY names in STATION; query the value of N - N' from STATION. In other words, find the difference between the total number of CITY entries in the table and the number of distinct CITY entries in the table.

SELECT COUNT(CITY)-COUNT(DISTINCT CITY) 
FROM STATION;

-- 09 - Weather Observation Station 5
-- Query the two cities in STATION with the shortest and longest CITY names, as well as their respective lengths (i.e.:      number of characters in the name). If there is more than one smallest or largest city, choose the one that comes first when ordered alphabetically.

SELECT * 
FROM (
    SELECT CITY, LENGTH(CITY) 
    FROM STATION 
    ORDER BY LENGTH(CITY), CITY) 
    WHERE 
        ROWNUM = 1 
    UNION 
    SELECT * 
    FROM (
        SELECT CITY, LENGTH(CITY) 
        FROM STATION 
        ORDER BY LENGTH(CITY) DESC, CITY) 
        WHERE 
            ROWNUM = 1;

-- 10 - Weather Observation Station 6
-- Query the list of CITY names starting with vowels (i.e., a, e, i, o, or u) from STATION. Your result cannot contain duplicates.

SELECT DISTINCT CITY
FROM STATION
WHERE
    CITY LIKE 'A%' or
    CITY LIKE 'E%' or
    CITY LIKE 'I%' or
    CITY LIKE 'O%' or
    CITY LIKE 'U%';

--OTRAS FORMAS

SELECT DISTINCT CITY 
FROM STATION 
WHERE 
    REGEXP_LIKE(LOWER(CITY), '^[aeiou]');

SELECT DISTINCT CITY 
FROM STATION 
WHERE 
    SUBSTR(UPPER(CITY), LENGTH(CITY), 1) IN ('A','E','I','O','U');

-- 11 - Weather Observation Station 7
-- Query the list of CITY names ending with vowels (a, e, i, o, u) from STATION. Your result cannot contain duplicates.

SELECT DISTINCT CITY 
FROM STATION 
WHERE 
    REGEXP_LIKE(LOWER(CITY), '^[aeiou]');

-- Otras formas

SELECT DISTINCT CITY
FROM STATION
WHERE
    CITY LIKE '%A' or
    CITY LIKE '%E' or
    CITY LIKE '%I' or
    CITY LIKE '%O' or
    CITY LIKE '%U';

SELECT DISTINCT CITY 
FROM STATION 
WHERE 
    SUBSTR(UPPER(CITY), 1, 1) IN ('A','E','I','O','U');

-- 12 - Weather Observation Station 8
-- Query the list of CITY names from STATION which have vowels (i.e., a, e, i, o, and u) as both their first and last characters. Your result cannot contain duplicates.

SELECT DISTINCT CITY 
FROM STATION 
WHERE 
    SUBSTR(UPPER(CITY), 1, 1) IN ('A','E','I','O','U') AND
    SUBSTR(UPPER(CITY), LENGTH(CITY), 1) IN ('A','E','I','O','U');

-- 13 - Weather Observation Station 9
-- Query the list of CITY names from STATION that do not start with vowels. Your result cannot contain duplicates.

SELECT DISTINCT CITY 
FROM STATION 
WHERE 
    REGEXP_LIKE(LOWER(CITY), '^[^aeiou]');

-- 14 - Weather Observation Station 10
-- Query the list of CITY names from STATION that do not end with vowels. Your result cannot contain duplicates.

SELECT DISTINCT CITY
FROM STATION
WHERE
    REGEXP_LIKE(UPPER(CITY), '([^AEIOU]$)');


-- 15 - Weather Observation Station 11
-- Query the list of CITY names from STATION that either do not start with vowels or do not end with vowels. Your result cannot contain duplicates.

SELECT DISTINCT CITY
FROM STATION
WHERE
    REGEXP_LIKE(LOWER(CITY), '(^[^aeiou])|([^aeiou]$)');

-- 16 - Weather Observation Station 12
-- Query the list of CITY names from STATION that do not start with vowels and do not end with vowels. Your result cannot contain duplicates.

SELECT DISTINCT CITY
FROM STATION
WHERE
    REGEXP_LIKE(UPPER(CITY), '^[^AEIOU].*[^AEIOU]$');

-- 17 - Higher Than 75 Marks
-- Query the Name of any student in STUDENTS who scored higher than 75 Marks. Order your output by the last three characters of each name. If two or more students both have names ending in the same last three characters (i.e.: Bobby, Robby, etc.), secondary sort them by ascending ID.

SELECT NAME
FROM STUDENTS
WHERE
    MARKS > 75
ORDER BY SUBSTR(NAME, LENGTH(NAME) - 2, 3), ID;

-- 18 - Employee Names
-- Write a query that prints a list of employee names (i.e.: the name attribute) from the Employee table in alphabetical order.

SELECT NAME
FROM EMPLOYEE
ORDER BY NAME;

-- 19 - Employee Salaries
-- Write a query that prints a list of employee names (i.e.: the name attribute) for employees in Employee having a salary greater than $2000 per month who have been employees for less than 10 months. Sort your result by ascending employee_id.

SELECT NAME
FROM EMPLOYEE
WHERE
    MONTHS < 10 AND
    SALARY > 2000
ORDER BY EMPLOYEE_ID;