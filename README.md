# Help Your Custodian
Description:

- I have noticed that school trashcans often seem to stink a bit and it is probably due to wet waste not being taken out at the right time.
- Also, our custodians are too busy to peep inside every single one.
- Spending a moment of our life clicking a button to help our custodians out is the best way to help the community and make schools stink lesser.

PCB Schematic:

<img width="600" height="400" alt="image" src="https://github.com/user-attachments/assets/48fd8841-ec92-4b19-82e5-19c83d7ef3f8" />

Details:

- Time spent = 2 hours
- I started with a xiao rp2040, but then I realized that a xiao esp32 c3 would be a better investment for future projects.
- I used the original symbol initially, but then realized how important reusing the XIAO again for me is.
- Finally I settled to use socket connectors, so I an reuse the parts in future projects.

PCB Design:

<img width="600" height="400" alt="image" src="https://github.com/user-attachments/assets/b4c3ac11-0127-4be5-9032-d940bafda475" />

<img width="600" height="200" alt="Screenshot 2026-08-07 230001" src="https://github.com/user-attachments/assets/17ab16e5-ba98-4de0-a6ae-83d7b2f4bc84" />

Details:

- Time Spent = 2 hours
- I routed all the traces and all those parts were easy.
- It took me sometime to figure out the shape and silkscreen I wanted to use.
- Earlier, I was fileting corners by using an arc and connect it using lines, but then I figured out ho to filet corners using shape modification

Coding:

<img width="600" height="800" alt="image" src="https://github.com/user-attachments/assets/14637241-532b-4cd3-9b89-8c6fe3962558" />

Details:

- Time Spent = 1 hours
- At the start I was going for kind of a calling approach by sending messages to the custodian using telegram.
- Then I realised how big of a prank this might be among students.
- So I made it so the button updates the matrix every time you throw away your trash.

Bill of Materials:

| Part                | Qty | Source          | Link                        | Cost   |
|---------------------|-----|-----------------|-----------------------------|--------|
| XIAO ESP32 C3       | 1   | Amazon          | https://a.co/d/0e2cZeYc     | $9.90  |
| MAX7219 Matrix      | 1   | Amazon          | https://a.co/d/0ffXBsqx     | $8.99  |
| Cherry MX Switch    | 1   | I have it       | none                        | none   |
| DHT11 Module        | 1   | Amazon          | https://a.co/d/0dia7duY     | $9.97  |
| Header Connectors   | 1   | Amazon          | https://a.co/d/083PV2Bl     | $7.99  |
