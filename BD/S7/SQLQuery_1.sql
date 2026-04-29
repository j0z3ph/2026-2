CREATE VIEW v_product_list As
select product_id,
product_name,
brand_name,
category_name,
model_year,
list_price
from production.products t1
JOIN production.brands t2 on t1.brand_id = t2.brand_id
join production.categories t3 on t1.category_id = t3.category_id



select * from v_product_list
select * from production.products