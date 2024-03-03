#!/usr/bin/env python
# coding: utf-8

# # EES - 331: Geohydrology 
# 
# ## Graded Assignment 3: Unconfined Groundwater Aquifer Hydrology
# 
# ### Name: Om Vaknalli
# ### Roll No. : 18376
# ### Date of Submission: 15th November 2020

# In[47]:


#Importing the required libraries

import numpy as np
import matplotlib.pyplot as plt
get_ipython().run_line_magic('matplotlib', 'inline')
from sympy import symbols, solve


# In[48]:


#Defining our question

"""
An unconfined aquifer (K = 5 m/day) situated on the top of a horizontal impervious layer connects two parallel water 
bodies M and N which are 1200 m apart. The water surface elevations of M and N, measured above the horizontal impervious 
bed, are 10.00 m and 8.00 m. If a uniform recharge at the rate of 0.002 m3 /day per m2 of the horizontal area occurs on the 
ground surface, estimate:

(i) the water table profile

(ii) the location and elevation of the water table divide

(iii) the seepage discharges into the lakes and

(iv) the recharge rate at which the water table divide coincides with the upstream edge of the aquifer and the total seepage
flow per unit width of the aquifer at this recharge rate.
""";


# In[49]:


# Recognising the data in the question

K = 5
L = 1200
h1 = 10
h2 = 8
R = 0.002


# In[50]:


#Setting the background and defining the required functions

"""
As we have solved in class, the governing differential equation for hydrology of a rechargable, fully saturated unconfined
aquifer with isotropic, incompressible & homogeneous materials in one dimension under steady state conditions is:

d"(h^2(x)) = -2*R/K

Hence, the solution of the governing equation is:

h**2 = (-R/K)*(x**2) + c1*x + c2

Boundary conditions: h(0) = h1 = 10, h(L) = h2 = 8

Hence,

c1 = ((h2**2 - h1**2) + R*(L**2)/K)/L
c2 = h1**2

Thus, the solution to this eqaution with boundary conditions is h(x) where:
"""

def h(x):
    return np.sqrt((-R/K)*(x**2) + (h2**2 - h1**2 + R*(L**2)/K)*x/L + h1**2)


# ### Part 1

# In[51]:


#Plotting the water table profile 

xp = np.linspace(0,L,500)
yp = (-R/K)*(xp**2) + (h2**2 - h1**2 + R*(L**2)/K)*xp/L + h1**2
yp = np.sqrt(yp)

plt.plot(xp,yp)
plt.xlabel("horizontal length (metres)")
plt.ylabel("Draw down length (metres)")

#This is a part of an ellipse.


# ### Part 2

# In[52]:


#Finding the location and amplitude of maximum height of water table (water table divide)

coefficients = coefficients = np.polyfit(xp, yp, 2)
sol = solve(np.polyder(coefficients))
lmax = L/2 + (K/(2*R))*(h2**2 - h1**2)/L
print("The location of the water table divide is",lmax,"m")

hmax = h(lmax)
print("Height of the water table divide is", hmax)


# ### Part 3

# In[53]:


#Finding seepage discharges into both the lakes. These would occur at x = 0 & x = L
q0 = R*(0 - L/2)+(K/(2*L))*(h1**2- h2**2)
qL = R*(L - L/2)+(K/(2*L))*(h1**2- h2**2) 
print('The discharge in the upper lake:',q0)
print('The discharge in the lower lake:',qL)


# ### Part 4

# In[54]:


#Recharge rate and seepage flow per width to find when the water table divide coincides with the upper lake aquifer boundary
recharge = (K/(L**2))*(h1**2 - h2**2)
qc = recharge*L
print('The recharge rate will be:', recharge)
print('seepage flow per unit width:',qc)

