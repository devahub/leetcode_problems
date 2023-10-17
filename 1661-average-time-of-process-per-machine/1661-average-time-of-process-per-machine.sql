select a.machine_id,ROUND(AVG(b.timestamp-a.timestamp),3) AS processing_time 
from Activity as a join Activity as b on 
a.machine_id = b.machine_id AND
a.process_id = b.process_id WHERE
b.activity_type = 'end' AND A.activity_type ='start' 
GROUP BY a.machine_id;