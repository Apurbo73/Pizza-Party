# Pizza Party

This C++ program calculates how many **pizzas** are needed for a party based on the number of **girls** (`A`) and **boys** (`B`). Here's a breakdown of how it works:

---

### Input:

```cpp
int A, B;
cin >> A >> B;
```

* `A` is the number of **girls**.
* `B` is the number of **boys**.
* Input is taken from the user.

---

### Step-by-step Logic:

#### 1. **Adjust number of boys**:

```cpp
int totalBoys = A + 1;
```

* Instead of using `B`, it sets the number of boys to `A + 1`.
* This suggests the logic assumes there is **one more boy than the number of girls**—possibly because one additional male (maybe the host or teacher) is always present.

---

#### 2. **Calculate total slices needed**:

```cpp
int totalSlices = (totalBoys * 4) + (B * 3);
```

* Every boy (based on `totalBoys`) eats **4 slices**.
* Every girl (originally `B`) eats **3 slices**.
* This is **weird**, because `B` is originally the number of boys, but it's reused here as if it's the number of girls.

⚠️ **Likely Bug or Confusion**: This line implies:

* `totalBoys = A + 1` → boys
* `B * 3` → treats B as if it's girls

So maybe the **variable names are swapped**. A better version might look like:

```cpp
int girls, boys;
cin >> girls >> boys;
int totalSlices = (boys * 4) + (girls * 3);
```

---

#### 3. **Compute pizzas needed**:

```cpp
int pizzasNeeded = (totalSlices + 7) / 8;
```

* Each pizza has 8 slices.
* To **round up** the number of pizzas (since you can’t order part of a pizza), it uses this formula:

  * `(totalSlices + 7) / 8` effectively means **ceiling division**.

---

### Final Output:

```cpp
cout << pizzasNeeded << endl;
```

* Prints the number of pizzas needed.

---

### Summary:

* Takes number of girls (`A`) and boys (`B`), but uses `A + 1` as boys and `B` as girls, which is likely wrong.
* Calculates number of slices each person needs.
* Divides total slices by 8 (slices per pizza), rounding up.

This program calculates how many pizzas are needed based on how many slices boys and girls will eat. It takes two inputs: A and B, but uses them in a confusing way—A + 1 is treated as the number of boys (each eating 4 slices), and B is treated as the number of girls (each eating 3 slices). It then adds up the total number of slices needed.

Since each pizza has 8 slices, the program divides the total slices by 8 and rounds up using (totalSlices + 7) / 8. Finally, it prints the number of pizzas required to make sure everyone gets enough. 
