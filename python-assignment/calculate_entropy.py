from scipy.stats import entropy
import pandas as pd

def Calc_Entropy(label):
    l1 = list(label)
    data = pd.Series(l1)
    ent = entropy(data.value_counts())
    return ent
    
def main():
    label = input("Enter The String:\t")
    ret = Calc_Entropy(label)
    print("Entropy is:\t",ret)
    
    
if __name__ == "__main__":
    main()