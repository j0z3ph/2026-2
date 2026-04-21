select store_id FROM sales.stores
UNION ALL
SELECT brand_id FROM production.brands


select store_id FROM sales.stores
INTERSECT
SELECT brand_id FROM production.brands


select store_id FROM sales.stores
EXCEPT
SELECT brand_id FROM production.brands

SELECT brand_id FROM production.brands
EXCEPT
select store_id FROM sales.stores


select * from sales.stores
SELECT distinct state from sales.customers

select customer_id, first_name, last_name, 
case [state]
    when 'NY' then 'New York'
    when 'CA' then 'California'
    when 'TX' then 'Texas'
end as [state]
from sales.customers


select order_id, sum(list_price) as total,
case 
    when sum(list_price) >= 1000 and sum(list_price) <= 2000 then   
        sum(list_price) - 100
    when sum(list_price) > 2000  then   
        sum(list_price) - 500
    else
        sum(list_price)
end
from sales.order_items
group by order_id




select staff_id, first_name, last_name, coalesce(manager_id, '') from sales.staffs