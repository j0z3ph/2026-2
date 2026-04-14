USE BikesDB
GO

SELECT store_name + ' ' + email AS [Nombre Completo] FROM sales.stores

SELECT * FROM sales.customers WHERE first_name LIKE '%Liz%'

-- Update
UPDATE sales.customers 
SET first_name='Lizete'
--WHERE customer_id = 19

DELETE FROM sales.customers

SELECT * FROM sales.customers

SELECT brand_id, brand_name FROM production.brands
ORDER BY 1 DESC