import csv
import pandas as pd
from collections import Counter
import matplotlib.pyplot as plt

class TopFrequency(object):
	def top(self):
		df = pd.read_csv('frequency-leet.csv',sep=',')
		#print df.NVIDIA.value_counts()
		gp = df.groupby(['All']).count()
		plt1 = (gp['Adobe'] + gp['FB'] + gp['MS'] + gp['Amazon'] + gp['NVIDIA'] + gp['Uber'] + gp['Apple'] + gp['Google'] + gp['Vmware'])
		plt1.to_csv('sorted-freq.csv')
		#plt1.plot(kind='bar',x='Leet_#',y='Frequency',color='red')
		#plt.show()
		# with open('frequency-leet.csv') as csv_file:
		# 	csv_reader = csv.reader(csv_file, delimiter=',')
		# 	for row in csv_reader:



if __name__ == '__main__':
	s = TopFrequency()
	print s.top()
