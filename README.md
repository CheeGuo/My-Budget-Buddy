# My Budget Buddy 🧾💰

My Budget Buddy is a **terminal-based expense tracker** built in C that helps users manage their monthly budget, track daily expenses, and review weekly or monthly financial summaries.

## 🛠 Features
- Personal info setup (name, birth date, phone, etc.)
- Custom payment types and expense categories
- Daily expense entry (with date auto-tracking)
- Weekly summaries for category-based spending
- Monthly expense summary with full breakdown
- Total spend vs. salary % calculator
- File-saving for all your reports (TXT format)

## 📁 Saved Files
- `output.txt` → your profile info
- `weekly_summary.txt` → each week's category summary
- `category_payment_summary.txt` → lists of categories and payment types
- `expenses_summary.txt` → full transaction logs
- `category_summary.txt` → total spending by category
- `monthly_summary.txt` → weekly breakdown + % spent from salary

## 👀 Example Categories
- Dining Out
- Rent
- Transport
- Groceries

## ⚙ How to Run
1. Compile:
   ```bash
   gcc yourfile.c -o budgetbuddy
