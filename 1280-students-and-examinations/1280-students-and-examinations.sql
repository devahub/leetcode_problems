select student_id , student_name, subject_name, 
    COUNT(a.subject_name) AS attended_exams from Students Cross join Subjects
    LEFT JOIN Examinations a USING (student_id, subject_name)
GROUP BY student_id, subject_name
ORDER BY student_id, subject_name;