SELECT w1.id 
FROM weather w1 
JOIN weather w2 
ON w1.recordDate = DATE_FORMAT(w2.recordDate + INTERVAL 1 DAY, '%Y-%m-%d') 
WHERE w1.temperature > w2.temperature;
