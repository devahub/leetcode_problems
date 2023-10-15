select customer_id, count(v.visit_id) as Count_no_trans from Visits v left join Transactions t on v.visit_id=t.visit_id 
where Transaction_id is Null
group by Customer_id