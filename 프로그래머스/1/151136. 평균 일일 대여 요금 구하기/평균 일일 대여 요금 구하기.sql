-- 코드를 입력하세요
SELECT
    ROUND(AVG(C.DAILY_FEE), 0) AS AVERAGE_FEE
FROM
    CAR_RENTAL_COMPANY_CAR C
WHERE
    C.CAR_TYPE = 'SUV';
