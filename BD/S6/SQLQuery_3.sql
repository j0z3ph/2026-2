select distinct order_status from sales.orders


SELECT top(1) store_id, store_name from (

select t2.store_id, store_name, count(order_id) as cant
from sales.orders t1
JOIN sales.stores t2 ON t1.store_id = t2.store_id 
GROUP BY t2.store_id, store_name
--ORDER BY count(order_id) DESC 
) 
as Tabla
ORDER BY cant DESC 