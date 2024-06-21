# Write your MySQL query statement below

select e1.name as Employee from Employee as e1 where e1.salary > (select salary from Employee where id = e1.managerId)