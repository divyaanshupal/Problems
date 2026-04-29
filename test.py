import random
from datetime import datetime, timedelta

companies = ["Google"]
clients = ["YouTube", "Spotify", "Uber", "Flipkart", "Airbnb", "Meta", "Amazon", "Netflix"]
services = ["Cloud Services", "AI/ML", "App Development", "Data Analytics", "Cybersecurity"]
regions = ["North America", "Europe", "Asia", "Middle East"]

def random_date(start, end):
    return start + timedelta(days=random.randint(0, (end - start).days))

start_base = datetime(2025, 1, 1)
end_base = datetime(2025, 12, 31)

rows = []

header = "Company,ProjectID,Client,Service,Region,RevenueUSD,CostUSD,ProfitUSD,Employees,StartDate,EndDate,Status"
rows.append(header)

for i in range(50000):
    company = "Google"
    project_id = f"PJT{10000+i}"
    client = random.choice(clients)
    service = random.choice(services)
    region = random.choice(regions)

    revenue = random.randint(100000, 5000000)
    cost = random.randint(50000, revenue - 50000)
    profit = revenue - cost
    employees = random.randint(5, 50)

    start_date = random_date(start_base, end_base)
    end_date = start_date + timedelta(days=random.randint(30, 180))

    status = random.choice(["Completed", "Ongoing", "Planned"])

    row = f"{company},{project_id},{client},{service},{region},{revenue},{cost},{profit},{employees},{start_date.date()},{end_date.date()},{status}"
    rows.append(row)

# Save file
with open("google_projects_50k.csv", "w") as f:
    f.write("\n".join(rows))

print("CSV with 50,000 rows generated ✅")