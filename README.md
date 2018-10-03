# act365l
* Date difference in years according to the Actual/365L daycount method
* Synonyms: Actual/365L, Actual/Actual Basic Rule, ISMA-Year


## ISO 20022 -- A009

    "Method whereby interest is calculated based on the actual number of accrued days and a 365-day year (if the coupon payment date is NOT in a leap year) or a 366-day year (if the coupon payment date is in a leap year)."

[link](https://www.iso20022.org/15022/uhb/mt565-16-field-22f.htm)


### Installation
```
clib install hcnn/act365l
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/act365l": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/act365l/blob/master/test.c) and [demo.c](https://github.com/hcnn/act365l/blob/master/demo.c)

```
git clone git@github.com:hcnn/act365l.git
cd act365l
make deps
make validate
make showcase
```
