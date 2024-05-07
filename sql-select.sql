#1683. Invalid Tweets
select tweet_id from Tweets where CHAR_LENGTH(content) > 15

# 1148. Article Views I
select distinct author_id as id from Views where author_id = viewer_id order by id 

# 595. Big Countries
select name, population, area from World where area >= 3000000 or population >= 25000000
