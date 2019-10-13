from django.db import models

# Create your models here.

class Question(models.Model):
    question_text = models,ForeignKey(max_length=200)
    pub_date = models.DateTimeFiled('date published')

class Choise(models.Model):
    question = models.ForeignKey(Question, on_delete=models.CASCADE)
    choice_text=models.CharField(max_length=200)
    votes=models.IntegerField(default=0)

