SELECT model_year, COUNT(product_id) AS [count] 
from production.products
GROUP BY model_year
HAVING COUNT(product_id) > 50


SELECT * FROM production.products
SELECT * FROM production.brands
SELECT * FROM production.categories


-- INNER JOIN
SELECT product_id, product_name, brand_name, category_name, model_year, list_price 
FROM production.products t1
INNER JOIN production.brands t2 ON t1.brand_id = t2.brand_id
JOIN production.categories t3 ON t1.category_id = t3.category_id


SELECT count(*) FROM sales.customers
select count(*) from (SELECT customer_id FROM sales.orders GROUP BY customer_id) t

select t1.staff_id ID, CONCAT(t1.first_name, ' ', t1.last_name) Empleado,
CONCAT(t2.first_name, ' ', t2.last_name) Jefe
from sales.staffs t1
LEFT JOIN sales.staffs t2 on t1.manager_id = t2.staff_id

select t1.staff_id ID, CONCAT(t1.first_name, ' ', t1.last_name) Empleado,
CONCAT(t2.first_name, ' ', t2.last_name) Jefe
from sales.staffs t1
RIGHT JOIN sales.staffs t2 on t1.manager_id = t2.staff_id

select t1.staff_id ID, CONCAT(t1.first_name, ' ', t1.last_name) Empleado,
CONCAT(t2.first_name, ' ', t2.last_name) Jefe
from sales.staffs t1
FULL JOIN sales.staffs t2 on t1.manager_id = t2.staff_id

select * from sales.order_items t1
CROSS join sales.order_items t2