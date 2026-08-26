# Write your MySQL query statement below
 SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary
 from Employee E inner join Department D
on E.departmentId = d.id
where e.salary = (
    select max(salary) from Employee where departmentId = E.departmentId
);
